#include "Pet.h"
#include <iostream>
#include <fstream>
using namespace std;
Pet::Pet(){
    hunger = 0;
    anger = 0;
    happy = 0;
    sleepy = 0;
    name = "";
}
Pet::Pet(int h, int a, int ha, int s, string name){
    hunger = h;
    anger = a;
    happy = ha;
    sleepy = s;    
    this->name = name;
}
void Pet::nextHour(){
    hunger += 10;
    anger += 5;
    happy -= 10;
    sleepy += 10;
}

string Pet::GetName(){
    return name;
}

void Pet:: setName(string _name){
    name = _name;
}

void Pet::SavePet(string _filename){
ofstream fout(_filename);
fout << hunger << endl;
fout << anger << endl;
fout << happy << endl;
fout << sleepy << endl;
fout << name << endl;
}

void Pet::LoadPet(string _filename){
ifstream fin(_filename);
fin >> hunger >> anger >> happy >> sleepy;
fin >> name;
}