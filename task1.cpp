#include <iostream>
using namespace std;
float Totalbill(string name, float quantity);
string fruit[4] = {"peach", "apple", "guava", "watermelon"};
int price[4] = {60, 70, 40, 30};

main(){
    string name;
    float quantity,total;
    cout << "Enter the name of the Fruit: ";
    cin >> name;
    cout << "Enter the Quantity in Kgs: ";
    cin >> quantity;
    total= Totalbill(name, quantity);
    cout << "Total bill : " << total;

}
//function to Calculate the total bill
float Totalbill(string name, float quantity){
    float calculate=0;
    if(name==fruit[0]){
        calculate=quantity*price[0];
    }
    if(name==fruit[1]){
        calculate=quantity*price[1];
    }
    if(name==fruit[2]){
        calculate=quantity*price[2];
    }
    if(name==fruit[3]){
        calculate=quantity*price[3];
    }
    return calculate;
}