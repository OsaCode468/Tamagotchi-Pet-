#include "Pet.h"
#include "Pet.cpp"
#include "Snorlax.h"
Snorlax::Snorlax(): Pet(0,0,0,0," "), sleepType(""){
}
Snorlax::Snorlax(int h, int a, int ha, int s, string name, string _sleep) : Pet(h, a, ha, s, name){
    this->sleepType = _sleep;
}       
void Snorlax::FeedPet(){
    cout << "With all that sleeping " << name << " needs to eat a bunch!";
    hunger -= 15;
}
        void SleepPet(){
            cout << "HI";
        }
        void Snorlax::PlayPet(){
            cout << name << "loves to sleep, but it guesses it will play with the ball you threw it." << endl;
            cout << "Thirty minutes later..." << endl;
            cout << "You go to check up on " << name << " and surprise it fell asleep on the ball." << endl;
            happy += 20;
        }
        void Snorlax::SetSleepType(string _type){
            sleepType = _type;
        }
        int Snorlax :: CalmSnorlax(){
           return 0;
        }