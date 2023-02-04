#include <iostream>
using namespace std;  
string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
float Discount(string name);
main(){
string name;
float amount;
cout << "Enter a movie name: ";
cin >> name;
amount= Discount(name);
cout << "Total Amount is: "<< amount;

}
//Funtion to calculate the price of movie ticket after discount
float Discount(string name){
    float amount;
    int z;
    for(int i=0; i<5; i++ ){
        if(movies[i]==name){
            z=i;
            break;
        }
    
    }
    if(z%2==0){
        amount=500- ((10*500)/100);
    }
    else{ 
        amount=500-((5*500)/100);
    }
    return amount;
}
