#pragma once
#ifndef SNORLAX_H
#define SNORLAX_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;
class Snorlax : public Pet{
        public:
        Snorlax();
        Snorlax(int,int,int,int,string, string);
        void FeedPet();
        void SleepPet();
        void PlayPet();
        void SetSleepType(string);
        int CalmSnorlax();
    private:
        string sleepType;
};
#endif