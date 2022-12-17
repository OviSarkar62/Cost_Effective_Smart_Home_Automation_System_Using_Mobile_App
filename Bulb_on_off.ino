#define RELAY_ON 0
#define RELAY_OFF 1
#define RELAY_1 4
char data = 0;
void setup() {
// Set pin as output.
pinMode(RELAY_1, OUTPUT);
// Initialize relay one as off so that on reset it would be off by default
digitalWrite(RELAY_1, RELAY_OFF);
Serial.begin(9600);
Serial.print(“Type: 1 to turn on bulb. 0 to turn it off!”);
}
void loop() {
if (Serial.available() &gt; 0) {
data = Serial.read(); //Read the incoming data and store it into variable data
Serial.print(data); //Print Value inside data in Serial monitor
Serial.print(“\n”); //New line
if(data == ‘1’){
digitalWrite(RELAY_1, RELAY_ON);
Serial.println(“Bulb is now turned ON.”);
}
else if(data == ‘0’){
digitalWrite(RELAY_1, RELAY_OFF);
Serial.println(“Bulb is now turned OFF.”);
}
}
}