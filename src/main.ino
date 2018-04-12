
const int ONBOARD_LED_PIN = LED_BUILTIN;
const int OFF_BOARD_LED_PIN = 1;

void setup()
{
    pinMode(ONBOARD_LED_PIN, OUTPUT);
    pinMode(OFF_BOARD_LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(ONBOARD_LED_PIN, HIGH);
    digitalWrite(OFF_BOARD_LED_PIN, LOW);
    delay(500);
    digitalWrite(ONBOARD_LED_PIN, LOW);
    digitalWrite(OFF_BOARD_LED_PIN, HIGH);
    delay(500);
}
