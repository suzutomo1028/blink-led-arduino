#include <Arduino.h>
#include <avr_debugger.h>

#define BUILTIN_LED 13

void setup() {
  // put your setup code here, to run once:

  debug_init();
  pinMode(BUILTIN_LED, OUTPUT);
  digitalWrite(BUILTIN_LED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  breakpoint();
  digitalWrite(BUILTIN_LED, HIGH);
  delay(500);

  breakpoint();
  digitalWrite(BUILTIN_LED, LOW);
  delay(500);
}
