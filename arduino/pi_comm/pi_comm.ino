char handshake_send_msg[]  = "ARD_HANDSHAKE";
char handshake_receive_msg[]  = "RBPI_HANDSHAKE";
char confirmation_msg[]  = "ARD_CONFIRM";

char message_send_header[]  = "ARDU:";
char message_receive_header[]  = "RBPI:";
char message_footer[]  = ":END";

char message_code_error[]  = "0:";
char message_code_success[]  = "1:";

// Looks like (to write, then read):
// ARDU:1:DATA_GOES_HERE:END\r\n
// RBPI:1:DATA_GOES_HERE:END\r\n

int k_is_pi_connected = false;

int read_buffer_size = 200;
char read_buffer[201] = { 0 };
char read_buffer_idx = 0;

char message[257] = { 0 };
bool write_message = false;

unsigned long read_timer = 0;
unsigned long write_timer = 0;

unsigned long read_interval = 16;
unsigned long write_interval = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  read_timer = millis();
  write_timer = millis();
}

bool connectPi() {

  int connect_buffer_size = 12;
  char connect_buffer[12] = { 0 };
  int connect_buffer_idx = 0;
  
  while(true) {

    // Check if match
    if (connect_buffer_idx == connect_buffer_size - 1) {

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

      connect_buffer[connect_buffer_idx] = read_byte;
      connect_buffer_idx = min(connect_buffer_idx + 1, connect_buffer_size - 1);
      
    } else {

      return false;
    }
  }
}
/*
void process_message() {

  // Process message
  write_message = (strlen(message) > 0);
}

void process_buffer() {

  // Process contents of read_buffer

  // Check for header, then code, then data and stop at :END

  if (String(read_buffer).startsWith(String(message_receive_header))) {

    // Check header
    char* code_start = read_buffer + strlen(message_receive_header);
    char* message_start = NULL;
    bool success = false;

    // Check success code
    if (String(code_start).startsWith(String(message_code_success))) {
      message_start = code_start + strlen(message_code_success);
      success = true;
        
    } else if (String(code_start).startsWith(String(message_code_error))) {
      message_start = code_start + strlen(message_code_error);
      success = false;
    }

    // Find message end
    if (message_start != NULL) {

       char* message_end = strchr(message_start, ':');
       int message_len = (int)(message_end - message_start);      
       strncpy(message, message_start, min(message_len, read_buffer_size));

       process_message();        
    }
  }
}
*/
bool readPi() {

  // Assumes a line sent over can be read in one go

  int read_byte_raw = Serial.read();
  
  while (read_byte_raw != -1) {

    char read_byte = (char)read_byte_raw;
    
    // Insert next byte
    read_buffer[read_buffer_idx] = read_byte;

    // Attempt to process string if capped
    if (read_buffer_idx == read_buffer_size - 1) {
          
      //process_buffer();

      // Shift buffer over
      for (int i = 0; i < read_buffer_size - 1; ++i) {
        read_buffer[i] = read_buffer[i + 1];
      }
      read_buffer[read_buffer_size - 1] = 0;
    }

    read_buffer_idx = min(read_buffer_idx + 1, read_buffer_size - 1);
  /*
    Serial.print(read_buffer_idx, DEC);
    Serial.print(" ~ ");
    for (int i = 0; i < read_buffer_idx; ++i) {
      Serial.print(read_buffer[i], DEC);  
      Serial.print("|");
    }
    Serial.println("");
*/
    //Serial.print(read_buffer_idx, DEC);
    //Serial.print(" ~ ");
    int i = 0;
    for (i = 0; i < read_buffer_idx; ++i) {
      
      // null terminate
      if (read_buffer[i] != 0)
        message[i] = read_buffer[i];  
      else
        message[i] = '\n';
        i = read_buffer_idx + 1;
      //Serial.print("|");
    }
    message[i] = 0;
    write_message = true;

    // Read next byte
    if (Serial.available() <= 0) {
      break;
    }
    
    read_byte_raw = Serial.read();
  }

  // Process string at end of immediate stream
  //process_buffer();
}

bool writePi() {

  bool write_success = true;

  write_success = write_success && Serial.print(message_send_header);
  write_success = write_success && Serial.print(message_code_success);

  if (write_message) {
    write_success = write_success && Serial.print(read_buffer);
  } else {
    write_success = write_success && Serial.print("I'm now connected to you Pi!");  
  }
  
  write_success = write_success && Serial.println(message_footer);

  write_message = false;

  return write_success;
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
    
    bool write_success = true;//writePi();

    // Check disconnect
    if (!write_success) {

      k_is_pi_connected = false;
      return;
    }
    
    if (millis() - read_timer > read_interval) {
      read_timer += read_interval;

      readPi();
    }

    if (millis() - write_timer > write_interval) {
      write_timer += write_interval;

      writePi();
    }
  }
}
