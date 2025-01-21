// Definisikan pin untuk LED
int ledHijau = 5;   // Pin untuk LED Hijau
int ledKuning = 18;   // Pin untuk LED Kuning
int ledMerah = 19;    // Pin untuk LED Merah

void setup() {
  // Setel pin-pin LED sebagai output
  pinMode(ledHijau, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledMerah, OUTPUT);
}

void loop() {
  // LED Hijau menyala
  digitalWrite(ledHijau, HIGH);
  delay(1000); // Tunggu 1 detik
  digitalWrite(ledHijau, LOW); // Matikan LED Hijau

  // LED Kuning menyala
  digitalWrite(ledKuning, HIGH);
  delay(1000); // Tunggu 1 detik
  digitalWrite(ledKuning, LOW); // Matikan LED Kuning

  // LED Merah menyala
  digitalWrite(ledMerah, HIGH);
  delay(1000); // Tunggu 1 detik
  digitalWrite(ledMerah, LOW); // Matikan LED Merah
}
