#include <xArmServoController.h>

// define servo controller
xArmServoController xarm = xArmServoController(Serial1);

void setup() {  
  // initialize serial console
  Serial.begin(9600);

  // initialize serial port
  Serial1.begin(9600);

  // wait for serial ports to initialize
  while (!Serial && !Serial1) {}
}

void loop() {
  // get servo 1's position
  int i = xarm.getPosition(1);

  // print position to console
  Serial.print("\nServo 1 position: "); Serial.println(i, DEC);

  // loop here indefinately
  while (true) {}
}