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
}
