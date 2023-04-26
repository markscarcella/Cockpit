// AudioPanel.h
#ifndef AudioPanel_h
#define AudioPanel_h

#include <Arduino.h>
#include "SerialMP3Player.h"

class AudioPanel {
  private:
    int RX;
    int TX;
    int btn[4];
  public:
    SerialMP3Player player;
    AudioPanel(int RX, int TX, int btn[]);
    void init();
    void startPlayer();
};

#endif
