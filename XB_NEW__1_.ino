/*''' This Code is part of IIT Mandi Project Named "IoT Testbed" under Dr. Srikant Srinivasan and
Dr. Siddhartha Sarma. This Code is written by Ajay Singh Chouhan(Project Associate). This is di-
stributed in the hope that it will be useful,but &*WITHOUT ANY WARRANTY without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.''' */
  
/* In this code we send a string along with the Temperature value */


#include <XBee.h>

XBee xbee = XBee();
uint8_t payload[] = { 0, 0, 0, 0, 0, 0, 0, 0};
//Create Payload According to your Requirment
//int tmp;

// Destination MAC address
//////////////////////////////////////////
uint8_t RX_ADDRESS = 0x4127FD2F;
//Address of your Xbee Rx
//////////////////////////////////////////

// Data to be send on the destination
//////////////////////////////////////////
uint8_t MSG = "Temp";
//////////////////////////////////////////
char b = 'T';
//int T = MSG.toInt();

float tmp;



union u_tag {
    uint8_t b[4];
    float fval;
} u;

void setup() {

  Serial.begin(9600);
  xbee.setSerial(Serial);

}

void loop(){
  
  tmp = 21.27;
  int x = tmp *100;
  Serial.print(tmp);
  Serial.println(b);
  pavload(x);
 
  Send(RX_ADDRESS);

  delay(1000);
}


