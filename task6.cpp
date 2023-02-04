#include <iostream>
using namespace std;
main(){
    int arr[3];
    int num, calculate;
    for(int i=0; i<3; i++){
    cout <<"Enter a number in the array: ";
    cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done:";
    cin >> num;
    for(int z=0 ; z<3 ;z++){
        if(arr[z]%2==0){
            calculate= arr[z]-(2*num);
            arr[z]= calculate;

        }
        else{
            calculate= arr[z]+(2*num);
            arr[z]= calculate;

        }

    }
    for(int i=0; i<3; i++){
        cout << arr[i] << endl;
    }
}

