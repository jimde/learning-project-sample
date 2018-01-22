#define CONTROL_PIN 3
#define MOTOR_1A_PIN 6
#define MOTOR_2A_PIN 7

void setup()
{
    pinMode(CONTROL_PIN, OUTPUT);
    pinMode(MOTOR_1A_PIN, OUTPUT);
    pinMode(MOTOR_2A_PIN, OUTPUT);
}

void loop()
{
    // spin the motor
    digitalWrite(MOTOR_1A_PIN, LOW);
    digitalWrite(MOTOR_2A_PIN, HIGH);
    /*
    invert the values above (LOW/HIGH) to reverse direction
    ie. MOTOR_1A_PIN -> HIGH, MOTOR_1A_PIN -> LOW

    DO NOT SET BOTH TO HIGH
    */

    for(int motorSpeed = 0; motorSpeed <= 255; ++motorSpeed)
    {
        analogWrite(CONTROL_PIN, motorSpeed); //control the motor speed (values from 0-255 are accepted)
        delay(15);
    }
    for(int motorSpeed = 255; motorSpeed >= 0; --motorSpeed)
    {
        analogWrite(CONTROL_PIN, motorSpeed); //control the motor speed (values from 0-255 are accepted)
        delay(15);
    }
}