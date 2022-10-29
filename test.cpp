#include <iostream>
#include <string>
#include <fstream>
//#include "Pet.h"
//#include "Pet.cpp"
#include "Kitten.h"
#include "Kitten.cpp"
#include "Dragon.h"
#include "Dragon.cpp"
#include "Snorlax.h"
#include "Snorlax.cpp"
using namespace std;

void menu(){
    cout << "1. Load a pet" << endl;
    cout << "2. Create a Dragon" << endl;
    cout << "3. Create a Kitten" << endl;
    cout << "4. Create a Snorlax" << endl;
    cout << "e for exit" << endl;
}
void interactionMenu(){
    cout << "1. Do you want to feed the pet?" << endl;
    cout << "2. Do you want to put the pet to sleep?" << endl;
    cout << "3. Do you want to play with the pet?" << endl;
    cout << "4. Do you want to use the pet's special function?" << endl;
    cout << "5. Do you want to save the Pet?" << endl;
    cout << "5. Do you want to go back to the initial menu?" << endl;
}
int main(){
   char choice = 'b';
   char choice2 = 'b';
   string _petType, filename, petName, food;
   while(choice != 'e'){
       cout << "What would you like to do?" << endl;
       menu();
       cin >> choice;
       if(choice == '1'){
           cout << "What type of Pet was it, and what was the file name?" << endl;
            cin >> _petType >> filename;
            if(_petType == "Dragon"){
                Dragon drago;
                drago.LoadPet(filename);
            }
            if(_petType == "Kitten"){
                Kitten kit;
                kit.LoadPet(filename);
            }
            if(_petType == "Snorlax"){
                Snorlax snor;
                snor.LoadPet(filename);
            }
       }
       else if(choice == '2'){
           Dragon obj;
           cout << "What do you want to name them?" << endl;
           cin >> petName;
           obj.setName(petName);
           while(choice2 != 'e'){
                interactionMenu();
                cin >> choice2;
                if(choice2 == '1'){
                    cout << "What do you want to feed it?" << endl;
                    cin >> food;
                    obj.SetFoodType(food);
                    obj.FeedPet();
                }
                if(choice2 == '2'){
                    obj.SleepPet();
                }
                if(choice2 == '3'){
                    obj.PlayPet();
                }
                if(choice2 == '4'){
                    cout << obj.GetName() << "attacked " << obj.AttackVillage() << "buildings!" << endl;

                }  
                if(choice2 == '5'){
                    cout << "What file?" << endl;
                    cin >> filename;
                    obj.SavePet(filename);
                }
                if(choice2 == '6'){
                    choice = 'j';
                    break;
                }             
           }
       }
   }
}