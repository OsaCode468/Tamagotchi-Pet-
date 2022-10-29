#include "Pet.h"
#include "Pet.cpp"
#include "Kitten.h"
Kitten::Kitten():Pet(0,0,0,0,""), toyType(""){

}
Kitten::Kitten(int h, int a, int ha, int s, string name, string _toy) : Pet(h, a, ha, s, name){
    this->toyType = _toy;
}
void Kitten::FeedPet(){
    cout << name << " love's Tuna and Kitty snacks, but make sure they don't get too much." << endl;
    hunger -= 30; 
}
void Kitten::setToyType(_toy){
    toyType = _toy;
}
void Kitten:: PlayPet(){
    cout << "Kittens love playing!" << endl;
    if(toyType == "Yarn Ball"){
        cout << name << " is wrestling with the yarn ball, it's unsure of whether it will ever win" << endl;
        happy += 15;
    }
    if(toyType == "Laser"){
        cout << name << " is trying to catch the laser, do you want to let it?" << endl;
    }
}
void Kitten::SleepPet(){
    cout << "Time for " << name << " to go to sleep, but they'll still be sleepy cause cats are always tired." << endl;
    sleepy -= 20;
}

int Kitten::ChaseKitten(){
    int seconds, goal;
    string choice;
    bool cond = true;
    cout << "Oh no, " << name << " has escaped! You need to catch them right now!" << endl;
    cout << "You need to wait a few seconds in order to catch it, how many seconds do you want to wait?" << endl;
    cin >> seconds;
    while(cond){
    goal = rand() % 11;
    if(goal == seconds){
        cout << "You caught the kitty!!!";
        cond = false;
        return seconds;
    }
    else{
        cout << "Aw shucks, you missed the kitty, do you want to try again?" << endl;
        cin >> choice;
        if(choice == "no"){
            return 0;
        }
    }
}
return seconds;
}
