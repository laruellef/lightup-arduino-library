float readTemp() {

  ADMUX = _BV(REFS1) | _BV(REFS0) | _BV(MUX2) | _BV(MUX1) | _BV(MUX0);
  ADCSRB = _BV(MUX5); // the MUX5 bit is in the ADCSRB register

  delay(2); // Wait for ADMUX setting to settle
  ADCSRA |= _BV(ADSC); // Start conversion
  while (bit_is_set(ADCSRA,ADSC)); // measuring

  uint8_t low = ADCL; // must read ADCL first - it then locks ADCH
  uint8_t high = ADCH; // unlocks both
  long result = (high << 8) | low; // combine the two
  
  // replace these constants with your 2 data points
  // these are sample values that will get you in the ballpark (in degrees C)
  // take a temperature reading (= temp1) 
  // and observe the rawData by Serial.println(rawData) (= data1)
  // take another temperature reading (= temp2)
  // and observe the rawData by Serial.println(rawData) (= data2)
  float temp1 = 0;
  long data1 = 274;
  float temp2 = 25.0;
  long data2 = 304;
 
  // calculate the scale factor
  float scaleFactor = (temp2 - temp1) / (data2 - data1);

  // now calculate the temperature
  float temp = scaleFactor * (result - data1) + temp1;

  return temp;
}