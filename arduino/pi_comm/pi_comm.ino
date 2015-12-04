char[] handshake_send_msg = "ARD_HANDSHAKE";
char[] handshake_receive_msg = "RBPI_HANDSHAKE";
char[] confirmation_msg = "ARD_CONFIRM";

char[] message_r_header = "RBPI:";
char[] message_w_header = "ARDU:";
char[] message_footer = ":END";

char[] message_code_error = "0:";
char[] message_code_success = "1:";

// Looks like (to write, then read):
// ARDU:1:DATA_GOES_HERE:END\r\n
// RBPI:1:DATA_GOES_HERE:END\r\n

int k_is_pi_connected = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void connectPi() {

  int connect_buffer_size = 12;
  char connect_buffer[12] = { 0 };
  int connect_buffer_index = 0;
  
  while(true) {

    // Check if match
    if (connect_buffer_index == connect_buffer_size - 1) {

      if (strncmp(handshake_receive_msg, connect_buffer, connect_buffer_size)) {

        // We have completed handshake
        return true;
      }

      // shift everything over
      for (int i = 0; i < connect_buffer_size - 1; ++i) {
        connect_buffer[i] = connect_buffer[i + 1];
      }
      connect_buffer[connect_buffer_size - 1] = 0;
    }

    // Try to receive handshake back
    int read_byte = Serial.read();
    
    if (read_byte != -1) {

      connect_buffer[connect_buffer_index] = read_byte;
      connect_buffer_index = min(connect_buffer_index + 1, connect_buffer_size - 1);
      
    } else {

      return false;
    }
  }
}

void readPi() {

  int read_byte = Serial.read()

  //if (read_byte != -1) {
  //
  //  Serial.print("Arduino read: ");
  //  Serial.println(read_byte);
  //}
}

void writePi() {

  Serial.print(message_r_header);
  Serial.print(message_code_success);
  Serial.print("I'm now connected to you Pi!");
  Serial.println(message_footer);
}

void loop() {
  // put your main code here, to run repeatedly:

  int connect_success = false;

  if (!k_is_pi_connected) {

    // Send handshake
    Serial.println(handshake_send_msg);
    delay(2000);

    // Receive handshake
    connect_success = connectPi();
  }

  // Talk to it
  if (connect_success) {

    k_is_pi_connected = true;

    // Send confirmation once
    Serial.println(confirmation_msg);    
  }

  // Read and write from and to pi
  if (k_is_pi_connected) {

     readPi();
     writePi()
     delay(16);
  }
}
