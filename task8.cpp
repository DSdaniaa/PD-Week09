#include <iostream>
using namespace std;
main(){
    int size, count=2;
    cout << "Enter the size of the array: ";
    cin >> size;
    string array[size];
    for(int i=0; i<size; i++){
        cout << "Enter a color: ";
        cin >> array[i];
    }
    for(int z=0 ; z<size-1; z++){
        if(array[z]!=array[z+1]){
            count = count +3;
        }
        else{
            count= count+2;
        }
    }
    cout<< "Time: " << count;

}