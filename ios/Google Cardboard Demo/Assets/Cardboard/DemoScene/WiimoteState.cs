
using System;

public struct ButtonState {

	public bool A;
	public bool B;
	public bool Left;
	public bool Right;
	public bool Up;
	public bool Down;
	public bool Home;
}

public struct IRCoordinate {

	public bool Exists;
	public int X;
	public int Y;
}

public class WiimoteState : Object {

	public ButtonState Buttons;
	public IRCoordinate[] IRCoordinates;
	public int PlayerIndex;

	public WiimoteState() {
	}

	public WiimoteState(string encodedStr) : base() {

		// WM1*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1

		string[] splitters = new string[]{ "*" };
		string[] asteriskSplit = encodedStr.Split(splitters, System.StringSplitOptions.None);

		this.PlayerIndex = (int)(asteriskSplit[0][asteriskSplit.Length - 1] - '0');

		splitters = new string[]{ "&" };
		string[] ampersandSplit = asteriskSplit[1].Split(splitters, System.StringSplitOptions.None);

		splitters = new string[]{ "=" };

		ButtonState buttons = new ButtonState();
		IRCoordinate[] irCoords = new IRCoordinate[4];

		foreach (string keyValuePair in ampersandSplit) {

			string[] equalSplit = keyValuePair.Split(splitters, System.StringSplitOptions.None);
			string key = equalSplit[0];
			string value = equalSplit[1];

			if (key.Equals("A")) { buttons.A = (value.Equals("1")); }
			else if (key.Equals("B")) { buttons.B = (value.Equals("1")); }
			else if (key.Equals("H")) { buttons.Home = (value.Equals("1")); }
			else if (key.Equals("U")) { buttons.Up = (value.Equals("1")); }
			else if (key.Equals("D")) { buttons.Down = (value.Equals("1")); }
			else if (key.Equals("L")) { buttons.Left = (value.Equals("1")); }
			else if (key.Equals("R")) { buttons.Right = (value.Equals("1")); }

			else if (key.StartsWith("IR")) {

				int irCameraIndex = (int)(key[key.Length - 1] - '0');

				if (value.Equals("-1")) {

					irCoords[irCameraIndex].Exists = false;
				} else {

					string[] coordsSplit = value.Split(new string[] { "|" }, System.StringSplitOptions.None);
					irCoords[irCameraIndex].X = Int32.Parse(coordsSplit[0]);
					irCoords[irCameraIndex].Y = Int32.Parse(coordsSplit[1]);
					irCoords[irCameraIndex].Exists = true;
				}
			}
		}

		this.Buttons = buttons;
		this.IRCoordinates = irCoords;
	}

	public WiimoteState(ButtonState buttons, IRCoordinate[] irCoords, int playerIndex) : this() {

		this.Buttons = buttons;
		this.IRCoordinates = irCoords;
		this.PlayerIndex = playerIndex;
	}

	public override string ToString() {

		string s = "WM " + PlayerIndex + ": ";

		if (Buttons.A) { s += "A "; }
		if (Buttons.B) { s += "B "; }
		if (Buttons.Home) { s += "Home "; }
		if (Buttons.Up) { s += "Up "; }
		if (Buttons.Down) { s += "Down "; }
		if (Buttons.Left) { s += "Left "; }
		if (Buttons.Right) { s += "Right "; }

		for (int i = 0; i < IRCoordinates.Length; ++i) {

			IRCoordinate coord = IRCoordinates[i];
			if (coord.Exists) {

				s += "IR" + i + ": " + coord.X + "," + coord.Y + " ";
			}
		}

		return s;
	}
}