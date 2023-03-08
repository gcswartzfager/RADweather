#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

Adafruit_BME280 bme;

void setup() {
  Serial.begin(9600);
  

}

void loop() {

  double temp,hum,pres;
  temp=bme.readTemperature();
  hum=bme.readHumidity();
  pres=bme.readPressure();

}
