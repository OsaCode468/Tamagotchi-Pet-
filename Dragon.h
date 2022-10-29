#pragma once
#ifndef DRAGON_H
#define DRAGON_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;
class Dragon : public Pet{
        public:
        Dragon();
        Dragon(int,int,int,int,string, string);
        void FeedPet();
        void SleepPet();
        void PlayPet();
        void SetFoodType(string);
        int AttackVillage();
    private:
        string foodType;
};
#endif