const int sensorTemperatura = A0;
const int sensorHumedad = A1;
void setup(){
	Serial.begin(9600);

}
void loop(){
	
	int valor1 = analogRead(sensorTemperatura);
	int valor2 = analogRead(sensorHumedad);
	float milivoltios = (valor1/1023.0)*5000;
	float temperatura = milivoltios/10;
	float humedad = (valor2/1023.0)*100
	
	Serial.print("00,");
	Serial.print(temperatura);
	Serial.print(",");
	Serial.println(humedad);
	delay(1000);
}
