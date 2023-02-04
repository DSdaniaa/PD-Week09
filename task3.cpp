#include <iostream>
using namespace std;
bool IfEven(string word);
string word;
main(){
    bool result;
    cout << "Enter a word: ";
    getline(cin, word);
    result= IfEven(word);
    if(result==0){
        cout << "false";
    }
    else{
        cout<< "true";
    }

}
//Function to check if length of string is even
bool IfEven(string word){
    int length,idx=0;
    while(word[idx]!='\0'){
     idx++;
    }
    if(idx%2==0){
        return true;
    }
    else{
        return false;
    }

}