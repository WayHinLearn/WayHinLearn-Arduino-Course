/*
 * WayHinLearn Arduino Course - Module 1C (Variant Code)
 * Project: 3-LED Traffic Light System (Red, Yellow, Green)
 * Wiring (LED တစ်လုံးချင်းစီတွင် 220 Ohm Resistor ခံပေးရန်):
 *   Pin 8  -> 220 Ohm -> Red LED (+)    -> GND
 *   Pin 9  -> 220 Ohm -> Yellow LED (+) -> GND
 *   Pin 10 -> 220 Ohm -> Green LED (+)  -> GND
 */

const int redPin    = 8;
const int yellowPin = 9;
const int greenPin  = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // ၁။ မီးနီ (ရပ်ရန် - ၅ စက္ကန့်)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(5000);

  // ၂။ မီးစိမ်း (သွားရန် - ၅ စက္ကန့်)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000);

  // ၃။ မီးဝါ (အရှိန်လျှော့ရန် - ၂ စက္ကန့်)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000);
}
