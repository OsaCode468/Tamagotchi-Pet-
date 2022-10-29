#pragma once
#ifndef KITTEN_H
#define KITTEN_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;
class Kitten : public Pet{
    public:
        Kitten();
        Kitten(int, int, int, int, string, string);
        void FeedPet();
        void PlayPet();
        void SleepPet();
        void setToyType(string);
        int ChaseKitten();
    private:
        string toyType;
};
#endif


