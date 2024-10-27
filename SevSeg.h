
#ifndef SEVSEG_H

#define SEVSEG_H

#include "Arduino.h"

class SevSeg
{
private:
    int _pinA;
    int _pinB;
    int _pinC;
    int _pinD;
    int _pinE;
    int _pinF;
    int _pinG;
    int _pinDP;
public:
    SevSeg(int pinA,int pinB,int pinC,int pinD,int pinE,int pinF,int pinG, int pinDP);
    void Begin();
    void Write(int num);
    void Clear();
    void Point();
};

#endif