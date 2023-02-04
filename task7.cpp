#include <iostream>
using namespace std;
int iscommon(string s1, string s2);
main(){
    int result;
    string word1, word2;
    cout << "Enter a word: ";
    cin >> word1;
    cout << "Enter another word: ";
    cin >> word2;
    result = iscommon(word1, word2);
    cout << result;

}
int iscommon(string word1, string word2){
    int length1=0, length2=0,count=0,x=0;
    while(word1[length1]!='\0'){
        length1++;
    }
    while(word1[length2]!='\0'){
        length2++;
    }
    cout << length1<<endl;
    cout << length2<<endl;
        for( int x=0; x<length1; x++){
        for(int z=0; z<length2; z++){
            if(word1[x]==word2[z]){
             count= count +1;
             break;
            }
        
        }
        }

    
    

    return count;
}