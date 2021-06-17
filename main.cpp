//Sepehr Norouzi
//Student Number = 992023035
#include <iostream>
#include "Jungle.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Pet.h"
using namespace std;

int main() {
    int number;
    cout<<"Please enter number of animals "<<endl;
    cin>>number; //get number of animals
    Jungle jungle(number); //create jungle
    WildAnimal wild[number/3];
    DomesticAnimal domestic[number/3];
    Pet pet[number/3];
    for(int i=0; i<number/3; i++){
        jungle.AddAnimal(&wild[i]); //add animal
    }
    for(int j=0; j<number/3; j++){
        jungle.AddAnimal(&domestic[j]); //add animal
    }
    for(int k=0; k<number/3; k++){
        jungle.AddAnimal(&pet[k]); //add animal
    }
    for(int k=0; k<1000; k++){
        jungle.movement();
    }
    cout<<"Total fall of animals is "<<jungle.getTotalFall()<<endl;
    return 0;
    /*
    //main of jungle with wild and domestic animals
    int number;
    cout<<"Please enter number of animals "<<endl;
    cin>>number; //get number of animals
    Jungle jungle(number); //create jungle
    for(int i=0; i<number/2; i++){
        jungle.AddAnimal(new WildAnimal()); //add animal
    }
    for(int j=0; j<number/2; j++){
        jungle.AddAnimal(new DomesticAnimal()); //add animal
    }
    for(int k=0; k<1000; k++){
        jungle.movement();
    }
    cout<<"Total fall of animals is "<<jungle.getTotalFall()<<endl;
    return 0;
    */
}
