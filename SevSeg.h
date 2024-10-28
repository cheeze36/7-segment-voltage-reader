/*
SevSeg.h
Author: Christopher Eldridge
christopher.m.eldridge@gmail.com
date:10/26/2024
Purpose: this library is is meant to write numbers 0-9 to a single 7 segment display
*/


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