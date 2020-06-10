int sensor;
int data;
int light_status = 10;
int threshold = 55;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //begin th serial communication with baud rate of 9600
  
  pinMode(8,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(A0);
  data = map(sensor,0,1023,0,100);

  if(data<threshold) 
  {
    digitalWrite(8,HIGH);
    light_status=100;
  }
  else
  {
    digitalWrite(8,LOW);
    light_status=10;
  }
  String sensor_value = String(data);
  Serial.print("Light intensity : ");
  Serial.println(data);
  delay(1000);
  
  String light_status1 = String(light_status);
  Serial.print("Light status : ");
  Serial.println(light_status);
  delay(1000);
  
  String threshold1 = String(threshold);
  Serial.print("Light status : ");
  Serial.println(threshold);
  delay(1000);
}
