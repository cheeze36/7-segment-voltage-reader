
#include "Arduino.h"
#include "SevSeg.h"

SevSeg::SevSeg(int pinA,int pinB,int pinC,int pinD,int pinE,int pinF,int pinG, int pinDP)
{
    _pinA = pinA;
    _pinB = pinB;
    _pinC = pinC;
    _pinD = pinD;
    _pinE = pinE;
    _pinF = pinF;
    _pinG = pinG;
    _pinDP = pinDP;
};

void SevSeg::Begin()
{
    pinMode(_pinA,OUTPUT);
    pinMode(_pinB,OUTPUT);
    pinMode(_pinC,OUTPUT);
    pinMode(_pinD,OUTPUT);
    pinMode(_pinE,OUTPUT);
    pinMode(_pinF,OUTPUT);
    pinMode(_pinG,OUTPUT);
    pinMode(_pinDP,OUTPUT);
};

void SevSeg::Write(int num)
{
    switch(num)
    {
        case 0:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH); 
          digitalWrite(_pinC, HIGH);
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinE, HIGH);  
          digitalWrite(_pinF, HIGH);    
        }
        break;
        case 1:
        {
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);    
        }
        break;
        case 2:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinG, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinE, HIGH);     
        }
        break;
        case 3:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinG, HIGH);     
        }
        break;
        case 4:
        {
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinG, HIGH);  
          digitalWrite(_pinF, HIGH);    
        }
        break;
        case 5:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinG, HIGH);  
          digitalWrite(_pinF, HIGH);    
        }
        break;
        case 6:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinG, HIGH);  
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinE, HIGH);  
          digitalWrite(_pinF, HIGH);    
        }
        break;
        case 7:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);      
        }
        break;
        case 8:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinE, HIGH);  
          digitalWrite(_pinF, HIGH);
          digitalWrite(_pinG, HIGH);  
        }
        break;
        case 9:
        {
          digitalWrite(_pinA, HIGH);
          digitalWrite(_pinB, HIGH);  
          digitalWrite(_pinC, HIGH);  
          digitalWrite(_pinD, HIGH);  
          digitalWrite(_pinG, HIGH);  
          digitalWrite(_pinF, HIGH);    
        }
        break;
    };

};

void SevSeg::Clear()
{
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, LOW);  
    digitalWrite(_pinC, LOW);  
    digitalWrite(_pinD, LOW);  
    digitalWrite(_pinE, LOW);  
    digitalWrite(_pinF, LOW);
    digitalWrite(_pinG, LOW);
    digitalWrite(_pinDP,LOW);

};

void SevSeg::Point()
{
  digitalWrite(_pinDP,HIGH);
};