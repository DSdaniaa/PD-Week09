#include <iostream>
using namespace std;
string move1(char num);
string move2(char num);
string move3(char num);
string move4(char num);

string Moves[10]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};
main(){
    string num, result1, result2, result3, result4;
    cout << "Enter a four digit number: ";
    cin >> num;
    if((num[0]=='0'|| num[0]=='1'||num[0]=='2'||num[0]=='3'||num[0]=='4'||num[0]=='5'||num[0]=='6'||num[0]=='7'||num[0]=='8'||num[0]=='9') && (num[1]=='0'|| num[1]=='1'||num[1]=='2' ||num[1]=='3'||num[1]== '4'||num[1]=='5'||num[1]=='6'||num[1]=='7'||num[1]=='8'||num[1]=='9') && (num[2]=='0'|| num[2]=='1'||num[2]=='2'||num[2]=='3'||num[2]=='4'||num[2]=='5'||num[2]=='6'||num[2]=='7'||num[2]=='8'||num[2]=='9') && (num[3]=='0'|| num[3]=='1'||num[3]=='2'||num[3]=='3'||num[3]=='4'||num[3]=='5'||num[3]=='6'||num[3]=='7'||num[3]=='8'||num[3]=='9')){
       result1= move1(num[0]);
       result2= move2(num[1]);
       result3= move3(num[2]);
       result4= move4(num[3]);

       cout << result1 << "  "<< result2 << "  " << result3 << "  " << result4;
    }
    else{
        cout << "Invalid Input";
    }


}
// To get the dance move for the first digit in the pin
string move1(char num1){
    int digit=0;
    if(num1=='1'){
        digit= 1;
    }
    if(num1=='2'){
        digit= 2;
    }
    if(num1=='3'){
        digit= 3;
    }
    if(num1=='4'){
        digit= 4;
    }
    if(num1=='5'){
        digit= 5;
    }
    if(num1=='6'){
        digit= 6;
    }
    if(num1=='7'){
        digit= 7;
    }
    if(num1=='8'){
        digit= 8;
    }
    if(num1=='9'){
        digit= 9;
    }

    return Moves[digit];
    
    
}
// To get the dance move for the second digit in the pin
string move2(char num2){
    int digit;
    if(num2=='0'){
        digit=1;
    }
    if(num2=='1'){
        digit= 1+1;
    }
    if(num2=='2'){
        digit= 1+2;
    }
    if(num2=='3'){
        digit= 1+3;
    }
    if(num2=='4'){
        digit= 1+4;
    }
    if(num2=='5'){
        digit= 1+5;
    }
    if(num2=='6'){
        digit= 1+6;
    }
    if(num2=='7'){
        digit= 1+7;
    }
    if(num2=='8'){
        digit= 1+8;
    }
    if(num2=='9'){
        digit= 1+9;
    }
 if(digit>9){
    digit= (digit-1)-9;
 }
  return Moves[digit];

}
// To get the dance move for the third digit in the pin
string move3(char num3){
    int digit;
    if(num3=='0'){
        digit=2;
    }
    if(num3=='1'){
        digit= 2+1;
    }
    if(num3=='2'){
        digit= 2+2;
    }
    if(num3=='3'){
        digit= 2+3;
    }
    if(num3=='4'){
        digit= 2+4;
    }
    if(num3=='5'){
        digit= 2+5;
    }
    if(num3=='6'){
        digit= 2+6;
    }
    if(num3=='7'){
        digit= 2+7;
    }
    if(num3=='8'){
        digit= 2+8;
    }
    if(num3=='9'){
        digit= 2+9;
    }
    if(digit>9){
    digit= (digit-1)-9;
 }
  return Moves[digit];

    
}
// To get the dance move for the fourth digit in the pin
string move4(char num4){
    int digit;
    if(num4=='0'){
        digit=3;
    }
    if(num4=='1'){
        digit= 3+1;
    }
    if(num4=='2'){
        digit= 3+2;
    }
    if(num4=='3'){
        digit= 3+3;
    }
    if(num4=='4'){
        digit= 3+4;
    }
    if(num4=='5'){
        digit= 3+5;
    }
    if(num4=='6'){
        digit= 3+6;
    }
    if(num4=='7'){
        digit= 3+7;
    }
    if(num4=='8'){
        digit= 3+8;
    }
    if(num4=='9'){
        digit= 3+9;
    }
 if(digit>9){
    digit= (digit-1)-9;
 }
  return Moves[digit];

}


