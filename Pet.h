#pragma once
#ifndef PET_H
#define PET_H
#include <iostream>
#include <fstream>
using namespace std;
class Pet{
public:
    Pet();
    Pet(int h, int a, int ha, int s, string name);
    void nextHour();
    virtual void FeedPet() = 0;
    virtual void SleepPet() = 0;
    virtual void PlayPet() = 0;
    void SavePet(string _filename);
    void LoadPet(string _filename);
    string GetName();
    void setName(string);
protected:
    int hunger;
    int anger;
    int happy;
    int sleepy;
    string name;
};
#endif