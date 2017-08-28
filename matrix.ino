const int analogInPin = A0; // аналоговый вход А0
int dValue;
int sound;
#include <Adafruit_NeoPixel.h>
#define MATRIX_PIN    4
#define LED_COUNT 32
Adafruit_NeoPixel matrix = Adafruit_NeoPixel(LED_COUNT, MATRIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(1200);
  matrix.begin();
  matrix.setBrightness(20);
}
void loop() {
  dValue = analogRead(analogInPin);
  Serial.println(dValue);
  sound = map(dValue, 50, 700, 1, 8);
  Serial.println(sound);
  Serial.println();
  delay(100);

  if (sound == 1)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 250, 250, 250);
    matrix.setPixelColor(6, 250, 250, 250);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 250, 250, 250);
    matrix.setPixelColor(9, 250, 250, 250);
    matrix.setPixelColor(10, 250, 250, 250);
    matrix.setPixelColor(11, 250, 250, 250);

    matrix.setPixelColor(12, 250, 250, 250);
    matrix.setPixelColor(13, 250, 250, 250);
    matrix.setPixelColor(14, 250, 250, 250);
    matrix.setPixelColor(15, 250, 250, 250);

    matrix.setPixelColor(16, 250, 250, 250);
    matrix.setPixelColor(17, 250, 250, 250);
    matrix.setPixelColor(18, 250, 250, 250);
    matrix.setPixelColor(19, 250, 250, 250);

    matrix.setPixelColor(20, 250, 250, 250);
    matrix.setPixelColor(21, 250, 250, 250);
    matrix.setPixelColor(22, 250, 250, 250);
    matrix.setPixelColor(23, 250, 250, 250);

    matrix.setPixelColor(24, 250, 250, 250);
    matrix.setPixelColor(25, 0, 250, 100);
    matrix.setPixelColor(26, 0, 250, 100);
    matrix.setPixelColor(27, 250, 250, 250);

    matrix.setPixelColor(28, 0, 250, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 0, 250, 0);
    matrix.show();
  }


  if (sound == 2)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 250, 250, 250);
    matrix.setPixelColor(6, 250, 250, 250);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 250, 250, 250);
    matrix.setPixelColor(9, 250, 250, 250);
    matrix.setPixelColor(10, 250, 250, 250);
    matrix.setPixelColor(11, 250, 250, 250);

    matrix.setPixelColor(12, 250, 250, 250);
    matrix.setPixelColor(13, 250, 250, 250);
    matrix.setPixelColor(14, 250, 250, 250);
    matrix.setPixelColor(15, 250, 250, 250);

    matrix.setPixelColor(16, 250, 250, 250);
    matrix.setPixelColor(17, 250, 250, 250);
    matrix.setPixelColor(18, 250, 250, 250);
    matrix.setPixelColor(19, 250, 250, 250);

    matrix.setPixelColor(20, 250, 250, 250);
    matrix.setPixelColor(21, 0, 250, 100);
    matrix.setPixelColor(22, 0, 250, 100);
    matrix.setPixelColor(23, 250, 50, 250);

    matrix.setPixelColor(24, 0, 250, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 0, 250, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }

  if (sound == 3)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 250, 250, 250);
    matrix.setPixelColor(6, 250, 250, 250);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 250, 250, 250);
    matrix.setPixelColor(9, 250, 250, 250);
    matrix.setPixelColor(10, 250, 250, 250);
    matrix.setPixelColor(11, 250, 250, 250);

    matrix.setPixelColor(12, 250, 250, 250);
    matrix.setPixelColor(13, 250, 250, 250);
    matrix.setPixelColor(14, 250, 250, 250);
    matrix.setPixelColor(15, 250, 250, 250);

    matrix.setPixelColor(16, 250, 250, 250);
    matrix.setPixelColor(17, 0, 250, 100);
    matrix.setPixelColor(18, 0, 250, 100);
    matrix.setPixelColor(19, 250, 250, 250);

    matrix.setPixelColor(20, 0, 250, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 0, 250, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
  if (sound == 4)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 250, 250, 250);
    matrix.setPixelColor(6, 250, 250, 250);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 250, 250, 250);
    matrix.setPixelColor(9, 250, 250, 250);
    matrix.setPixelColor(10, 250, 250, 250);
    matrix.setPixelColor(11, 250, 250, 250);

    matrix.setPixelColor(12, 250, 250, 250);
    matrix.setPixelColor(13, 0, 250, 100);
    matrix.setPixelColor(14, 0, 250, 100);
    matrix.setPixelColor(15, 250, 250, 250);

    matrix.setPixelColor(16, 0, 250, 0);
    matrix.setPixelColor(17, 250, 0, 0);
    matrix.setPixelColor(18, 250, 0, 0);
    matrix.setPixelColor(19, 0, 250, 0);

    matrix.setPixelColor(20, 250, 0, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 250, 0, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
  if (sound == 5)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 250, 250, 250);
    matrix.setPixelColor(6, 250, 250, 250);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 250, 250, 250);
    matrix.setPixelColor(9, 0, 250, 100);
    matrix.setPixelColor(10, 0, 250, 100);
    matrix.setPixelColor(11, 250, 250, 250);

    matrix.setPixelColor(12, 0, 250, 0);
    matrix.setPixelColor(13, 250, 0, 0);
    matrix.setPixelColor(14, 250, 0, 0);
    matrix.setPixelColor(15, 0, 250, 0);

    matrix.setPixelColor(16, 250, 0, 0);
    matrix.setPixelColor(17, 250, 0, 0);
    matrix.setPixelColor(18, 250, 0, 0);
    matrix.setPixelColor(19, 250, 0, 0);

    matrix.setPixelColor(20, 250, 0, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 250, 0, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
  if (sound == 6)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 250, 250, 250);
    matrix.setPixelColor(2, 250, 250, 250);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 250, 250, 250);
    matrix.setPixelColor(5, 0, 250, 100);
    matrix.setPixelColor(6, 0, 250, 100);
    matrix.setPixelColor(7, 250, 250, 250);

    matrix.setPixelColor(8, 0, 250, 0);
    matrix.setPixelColor(9, 250, 0, 0);
    matrix.setPixelColor(10, 250, 0, 0);
    matrix.setPixelColor(11, 0, 250, 0);

    matrix.setPixelColor(12, 250, 0, 0);
    matrix.setPixelColor(13, 250, 0, 0);
    matrix.setPixelColor(14, 250, 0, 0);
    matrix.setPixelColor(15, 250, 0, 0);

    matrix.setPixelColor(16, 250, 0, 0);
    matrix.setPixelColor(17, 250, 0, 0);
    matrix.setPixelColor(18, 250, 0, 0);
    matrix.setPixelColor(19, 250, 0, 0);

    matrix.setPixelColor(20, 250, 0, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 250, 0, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
  if (sound == 7)
  {
    matrix.setPixelColor(0, 250, 250, 250);
    matrix.setPixelColor(1, 0, 250, 100);
    matrix.setPixelColor(2, 0, 250, 100);
    matrix.setPixelColor(3, 250, 250, 250);

    matrix.setPixelColor(4, 0, 250, 0);
    matrix.setPixelColor(5, 250, 0, 0);
    matrix.setPixelColor(6, 250, 0, 0);
    matrix.setPixelColor(7, 0, 250, 0);

    matrix.setPixelColor(8, 250, 0, 0);
    matrix.setPixelColor(9, 250, 0, 0);
    matrix.setPixelColor(10, 250, 0, 0);
    matrix.setPixelColor(11, 250, 0, 0);

    matrix.setPixelColor(12, 250, 0, 0);
    matrix.setPixelColor(13, 250, 0, 0);
    matrix.setPixelColor(14, 250, 0, 0);
    matrix.setPixelColor(15, 250, 0, 0);

    matrix.setPixelColor(16, 250, 0, 0);
    matrix.setPixelColor(17, 250, 0, 0);
    matrix.setPixelColor(18, 250, 0, 0);
    matrix.setPixelColor(19, 250, 0, 0);

    matrix.setPixelColor(20, 250, 0, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 250, 0, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
  if (sound >= 8)
  {
    matrix.setPixelColor(0, 250, 250, 0);
    matrix.setPixelColor(1, 250, 0, 0);
    matrix.setPixelColor(2, 250, 0, 0);
    matrix.setPixelColor(3, 250, 250, 0);

    matrix.setPixelColor(4, 250, 0, 0);
    matrix.setPixelColor(5, 250, 0, 0);
    matrix.setPixelColor(6, 250, 0, 0);
    matrix.setPixelColor(7, 250, 0, 0);

    matrix.setPixelColor(8, 250, 0, 0);
    matrix.setPixelColor(9, 250, 0, 0);
    matrix.setPixelColor(10, 250, 0, 0);
    matrix.setPixelColor(11, 250, 0, 0);

    matrix.setPixelColor(12, 250, 0, 0);
    matrix.setPixelColor(13, 250, 0, 0);
    matrix.setPixelColor(14, 250, 0, 0);
    matrix.setPixelColor(15, 250, 0, 0);

    matrix.setPixelColor(16, 250, 0, 0);
    matrix.setPixelColor(17, 250, 0, 0);
    matrix.setPixelColor(18, 250, 0, 0);
    matrix.setPixelColor(19, 250, 0, 0);

    matrix.setPixelColor(20, 250, 0, 0);
    matrix.setPixelColor(21, 250, 0, 0);
    matrix.setPixelColor(22, 250, 0, 0);
    matrix.setPixelColor(23, 250, 0, 0);

    matrix.setPixelColor(24, 250, 0, 0);
    matrix.setPixelColor(25, 250, 0, 0);
    matrix.setPixelColor(26, 250, 0, 0);
    matrix.setPixelColor(27, 250, 0, 0);

    matrix.setPixelColor(28, 250, 0, 0);
    matrix.setPixelColor(29, 250, 0, 0);
    matrix.setPixelColor(30, 250, 0, 0);
    matrix.setPixelColor(31, 250, 0, 0);
    matrix.show();
  }
}
