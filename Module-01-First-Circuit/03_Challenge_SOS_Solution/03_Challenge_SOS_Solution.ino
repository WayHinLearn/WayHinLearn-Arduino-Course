/*
 * WayHinLearn Arduino Course - Module 1C (Challenge Solution)
 * Project: SOS Emergency Morse Code (... --- ...)
 * Wiring: Pin 8 -> 220 Ohm Resistor -> Red LED (+) -> GND
 */

const int ledPin = 8;
const int dotTime  = 200; // အမြန် (Dot) - 0.2 စက္ကန့်
const int dashTime = 600; // အနှေး (Dash) - 0.6 စက္ကန့်
const int gapTime  = 200; // တစ်ချက်နှင့်တစ်ချက်ကြား ခဏပိတ်ချိန်

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // --- S (အမြန် ၃ ချက်: . . .) ---
  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(600); // စာလုံးတစ်လုံးခြား ခဏနား

  // --- O (အနှေး ၃ ချက်: - - -) ---
  digitalWrite(ledPin, HIGH); delay(dashTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dashTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dashTime);
  digitalWrite(ledPin, LOW);  delay(600); // စာလုံးတစ်လုံးခြား ခဏနား

  // --- S (အမြန် ၃ ချက်: . . .) ---
  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(gapTime);

  digitalWrite(ledPin, HIGH); delay(dotTime);
  digitalWrite(ledPin, LOW);  delay(2000); // SOS တစ်ပတ်ပြီး ၂ စက္ကန့်နား
}
