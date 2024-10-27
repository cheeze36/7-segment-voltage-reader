/*
7-segment-voltage-reader
Author: Christopher Eldridge
christopher.m.eldridge@gmail.com 
date: 10/26/2024
Purpose: this firmware was designed for the ardiuno uno Rev3
It messures the voltage(0-5v on pin A0) and dispays on a multiplexed 
7 segment display. 
This firmware was tested using picSimLab

*/



#include "Arduino.h"
#include "SevSeg.h"


SevSeg sevseg1(2,3,4,5,6,7,8,9);      // sets up the seven segemnt display
int d1 = 10;                          // d1 -d4 are the selector bits for display    
int d2 = 11;                          // d1 being the left most display
int d3 = 12;
int d4 = 13;
int VoltagePin = A0;                  //this is the voltage pin

void setup() {
  // setup code
  sevseg1.Begin();                    // sets all the pins as outputs except A0
  pinMode(d1,OUTPUT);                 
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
};
void loop() {
  // Main loop
  int value = ((analogRead(VoltagePin)
                * 5.0) / 1024.0) * 100.0 + 1; // gets the reading from voltage pin and converts it into voltage time 100 plus 1

  int thousands = (value / 1000) % 10;//gets the digit from the thousands place ( should never not be 0)
  int hundreds = (value / 100) % 10;  //gets the digit from the hundreds place
  int tens = (value / 10) % 10;       //gets the digit from the tens place
  int ones = value % 10;              //gets the digit from the ones place

  //writes the first digit to display
  digitalWrite(d1,HIGH);
  sevseg1.Write(thousands);
  delay(10);
  digitalWrite(d1,LOW);
  sevseg1.Clear();

  //writes the second digit to display
  digitalWrite(d2,HIGH);
  sevseg1.Write(hundreds);
  sevseg1.Point();
  delay(10);
  digitalWrite(d2,LOW);
  sevseg1.Clear();

  //writes the third digit to display
  digitalWrite(d3,HIGH);
  sevseg1.Write(tens);
  delay(10);
  digitalWrite(d3,LOW);
  sevseg1.Clear();

  //writes the forth digit to display
  digitalWrite(d4,HIGH);
  sevseg1.Write(ones);
  delay(10);
  digitalWrite(d4,LOW);
  sevseg1.Clear();
  
};
