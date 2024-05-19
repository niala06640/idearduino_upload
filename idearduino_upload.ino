#include <Arduino.h>
//avec collaborateur
void setup() {
  Serial.begin(115200);
  delay(2000);
  ESP_LOGI("","setup() done");
}

void loop() {
  delay(2000);
  ESP_LOGI("","loop");
  Serial.print("boucle !");
}
