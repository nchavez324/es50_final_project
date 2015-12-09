using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using System;

public class TrackSensorManager : MonoBehaviour {

#if UNITY_IOS
	[DllImport ("__Internal")]
	private static extern bool NativeHeadTracking_iOS_Start();

	[DllImport ("__Internal")]
	private static extern void DebugMessage_iOS(string message);

	[DllImport ("__Internal")]
	private static extern bool NativeHeadTracking_iOS_End();
#endif
	#if UNITY_ANDROID
	
	#endif


	private ulong mLastCallMade = 0;

	public Text debugText;

	// Use this for initialization
	void Start () {
	}

	public void StartHeadTracking() {

		if (Application.platform == RuntimePlatform.IPhonePlayer) {

			NativeHeadTracking_iOS_Start();

		} else if (Application.platform == RuntimePlatform.Android) {

		}
	}

	public void SendNativeDebugMessage(string message) {

		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			
			DebugMessage_iOS(message);
			
		} else if (Application.platform == RuntimePlatform.Android) {
			
		}
	}

	// Update is called once per frame
	void Update () {
	}

	void HeadTrackUpdate(string message) {
	
		ulong mSecsSinceEpoch = (ulong)((DateTime.UtcNow - new DateTime (1970, 1, 1)).TotalMilliseconds);

		string payload = "";
		string timestamp = "";

		if (message.StartsWith("~")) {
			timestamp = message.Substring("~".Length);
		} else {
			string[] messageSplit = message.Split(new string[]{ "~" }, System.StringSplitOptions.None);
			payload = messageSplit[0];
			timestamp = messageSplit[1];
		}
		
		ulong timeDiff = mSecsSinceEpoch - mLastCallMade;

		ulong timeSent;
		ulong latency = ulong.MaxValue;
		if (ulong.TryParse(timestamp, out timeSent)) {

			latency = mSecsSinceEpoch - timeSent;
		}

		//SendNativeDebugMessage("M:<" + message + ">" + " T:<" + timestamp + "> D:<" + timeDiff + "> L:<" + latency + ">");

		Debug.Log("Got message: " + payload + ", timeDiff: " + timeDiff + ", latency: " + latency);

		WiimoteState[] states = ParseMessage(payload);

		string debugStr = "Wii Data: " + latency + "\n";
		foreach (WiimoteState state in states) {

			debugStr += state.ToString() + "\n";
		}
		debugText.text = debugStr;

		mLastCallMade = mSecsSinceEpoch;
	}

	WiimoteState[] ParseMessage(string message) {

		// Could be empty string, could have one wiimote, two wiimotes

		// WM0*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1
		// WM0*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1;WM1*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1

		message = message.Trim();

		if (message.Length > 0) {

			string[] semicolonSplit = message.Split(new string[] { ";" }, System.StringSplitOptions.None);
			WiimoteState[] states = new WiimoteState[semicolonSplit.Length];

			for (int i = 0; i < semicolonSplit.Length; ++i) {

				string wiimoteString = semicolonSplit[i];
				WiimoteState state = new WiimoteState(wiimoteString);
				states[i] = state;
			}

			return states;

		} else {

			return new WiimoteState[]{ };
		}
	}
}
