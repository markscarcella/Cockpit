// LEDPanel.h
#ifndef LEDMatrixPanel_h
#define LEDMatrixPanel_h

#include <Arduino.h>

class LEDMatrixPanel {
  private:
    int r[8];
    int g[8];
    int b[8];
  public:
    LEDMatrixPanel(int r[], int g[], int b[]);
    void init();
    void clear_all();
    void cycle_all(int duration);
};

#endif
