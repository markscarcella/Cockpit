#include "LEDMatrixPanel.h"
#include "AudioPanel.h"

// AudioPanel
int audio_RX = 10;
int audio_TX = 11;
int audio_btn[] = {4,5,6,7};
AudioPanel audio(audio_RX,audio_TX,audio_btn);

// LEDMatrixPanel
int matrix_r[] = {38,39,40,41,42,43,44,45};
int matrix_g[] = {30,31,32,33,34,35,36,37};
int matrix_b[] = {22,23,24,25,26,27,28,29};
LEDMatrixPanel matrix(matrix_r,matrix_g,matrix_b);

// JoystickPanel

// LEDRingPanel

// ButtonsPanel

// CounterPanel

// RockerPanel

// SwitchPanel

void setup() {
  audio.startPlayer();
}

void loop() {
  matrix.cycle_all(1000);
}
