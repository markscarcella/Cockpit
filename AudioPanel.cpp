//AudioPanel.cpp
#include "AudioPanel.h"

AudioPanel::AudioPanel(int RX, int TX, int btn[]) {
  this->RX = RX;
  this->TX = TX;
  for (int i=0; i<4; i++) {
    this->btn[i] = btn[i];
  }
  init();
}

void AudioPanel::init() {
  for (int i=0; i<4; i++) {
    pinMode(btn[i], INPUT);
  }
  SerialMP3Player mp3(RX, TX);
  this->player = mp3;
}

void AudioPanel::startPlayer() {
  player.begin(9600);
  delay(500);
  player.sendCommand(CMD_SEL_DEV, 0, 2);
  delay(500);
}
