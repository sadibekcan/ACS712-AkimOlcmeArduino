const int analogIn = A0;
int mVperAmp = 185;
int RawValue = 0;
int ACSoffset = 2500;
double Voltage = 0;
double Amps = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  RawValue = analogRead(analogIn);
  Voltage = (RawValue / 1023.0) * 5000;
  Amps = ((Voltage - ACSoffset) / mVperAmp);

  Serial.print("Ham deger = ");
  Serial.print(RawValue);
  Serial.print("\t mV = ");
  Serial.print(Voltage,3);
  Serial.print("\t Amp = ");
  Serial.print(Amps,3);
  delay(2500);

}
