int sensorPin = A0;  // select the input pin for the potentiometer
int tanah = A1;      // select the input pin for the potentiometer
int ledPin = 13;     // select the pin for the LED
int sensorValue = 0; // variable to store the value coming from the sensor
int nilai_tanah = 0;
void setup()
{
    // declare the ledPin as an OUTPUT:
    pinMode(ledPin, OUTPUT);

    pinMode(tanah, INPUT); //SIFATNYA OPSIONAL
    //menampilkan nilai sensor di laptop
    Serial.begin(9600);
}

void loop()
{
    sensorValue = analogRead(sensorPin);
    nilai_tanah = analogRead(tanah);

    Serial.print("potensio: ");
    Serial.print(sensorValue);
    Serial.print(" sensor tanah: ");
    Serial.println(nilai_tanah);
}