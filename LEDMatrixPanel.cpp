// LEDMatrixPanel.cpp
#include "LEDMatrixPanel.h"
  
LEDMatrixPanel::LEDMatrixPanel(int r[], int g[], int b[]) {
  for (int i=0; i<8; i++) {
    this->r[i] = r[i];
    this->g[i] = g[i];
    this->b[i] = b[i];
  }
  init();
}

void LEDMatrixPanel::init() {
  for (int i=0; i<8; i++)
  {
    pinMode(r[i], OUTPUT);
    pinMode(g[i], OUTPUT);
    pinMode(b[i], OUTPUT);
    digitalWrite(r[i],HIGH);
    digitalWrite(g[i],HIGH);
    digitalWrite(b[i],HIGH);
  }
}

void LEDMatrixPanel::clear_all() {
  for (int i=0; i<8; i++)
    { 
      digitalWrite(r[i],HIGH);
      digitalWrite(g[i],HIGH);
      digitalWrite(b[i],HIGH);
    }
}

void LEDMatrixPanel::cycle_all(int duration) {
  int r_val = random(2);
  int g_val = random(2);
  int b_val = random(2);
  for (int i=0; i<8; i++)
  {
    digitalWrite(r[i],r_val);
    digitalWrite(g[i],g_val);
    digitalWrite(b[i],b_val);
  }
  delay(duration);
}
