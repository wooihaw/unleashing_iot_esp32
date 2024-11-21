#include "DHT.h"
#define DHTPIN 17   // GPIO number connected to the DHT11 data pin
#define DHTTYPE DHT11    // DHT 11

// Initialize DHT sensor.
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();        // Initialize the DHT11 sensor.
  Serial.begin(115200); // Start serial communication at 115200 baud.
}

void loop() {
  // Delay between measurements.
  delay(2000);        // Wait 2 seconds

  // Reading temperature or humidity
  float humidity = dht.readHumidity();        // Read humidity
  float temperature = dht.readTemperature();  // Read temperature

  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  Temperature: ");
  Serial.print(temperature);
  Serial.println("°C ");
}
