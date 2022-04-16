#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLXtg6ltzI"
#define BLYNK_DEVICE_NAME "Test"
#include <BlynkSimpleEsp32.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

char auth[] = "1jIajShg30JO-QQZmlWf1NjdH5FNi2wW";
char ssid[] = "KONTRAKAN UYE";
char pass[] = "KUSANG123";

void setup()
{
    Serial.begin(115200);
    Blynk.begin(auth, ssid, pass);
}
void loop()
{
    Blynk.run();
}
