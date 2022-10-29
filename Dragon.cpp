#include "Pet.h"
#include "Dragon.h"
#include "Pet.cpp"
Dragon::Dragon():Pet(0,0,0,0, ""), foodType(""){

}
Dragon::Dragon(int h, int a, int ha, int s, string f, string _name):Pet(h, a, ha, s, _name){
    this->foodType = f;
}

void Dragon :: FeedPet(){
    if(foodType == "Human"){
        cout << "You can't feed " << name << " humans!!!" << endl;
    }
    if(foodType == "Cow"){
        hunger -= 30;
        cout << name << "'s really liked that cow!!!" << endl;
    }
    if(foodType == "Fish"){
        cout << name << "'s doesn't really like fish" << endl;
        hunger -= 5;
    }
    if (foodType == "Broccoli"){
        cout << name << "'s hates vegetable, especially Broccoli " << endl;
        hunger += 5;
        anger += 25;
    }
}
void Dragon :: SleepPet(){
    cout << name << " is real tired, after all invading a village and destroying it can get pretty tiring." << endl;
    sleepy -= 50;
}
void Dragon :: PlayPet(){
    cout << "A dragon's idea of playing is pretty violent so we'll stick to letting him sleep some more" << endl;
    sleepy -= 20;
    happy += 15;
}
void Dragon:: SetFoodType(string food){
    foodType = food;
}
int Dragon::AttackVillage(){
    bool cond = true;
    string choice;
    int destruction = 0;
    cout << "It's time to go attacking. What attack do you want to use?" << endl;
    while(cond){
        cin >> choice;
        if(choice == "Fireball"){
            cout << "Fireball struck, one building knocked down." << endl;
            destruction++;
        }
        else if(choice == "Swoop"){
            cout << "One swoop strike and another building knocked down" << endl;
            destruction++;
        }
        else if(choice == "Thunderclap"){
            cout << "Thunderclap reverberates through the whole land, multiple buildings knocked down" << endl;
            destruction += 5;
            break;
        }
        else{
            cond = false;
        }
    }
    return destruction;
}
