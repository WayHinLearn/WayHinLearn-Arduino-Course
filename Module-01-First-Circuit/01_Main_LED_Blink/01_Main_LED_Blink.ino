/*
 * WayHinLearn Arduino Course - Module 1C (Main Code)
 * Project: First External LED Blink
 * Wiring:
 *   Arduino Pin 8 -> 220 Ohm Resistor -> Red LED Anode (+)
 *   Red LED Cathode (-) -> Arduino GND
 */

const int ledPin = 8; // LED ချိတ်ဆက်ထားသော Digital Pin 8

void setup() {
  // Pin 8 ကို လျှပ်စစ်အထွက် (OUTPUT) အဖြစ် သတ်မှတ်ခြင်း
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // 5V ထုတ်ပေးပြီး LED မီးဖွင့်မည်
  delay(1000);                // 1000 milliseconds (၁ စက္ကန့်) စောင့်မည်

  digitalWrite(ledPin, LOW);  // 0V ပေးပြီး LED မီးပိတ်မည်
  delay(1000);                // ၁ စက္ကန့် စောင့်မည်
}
