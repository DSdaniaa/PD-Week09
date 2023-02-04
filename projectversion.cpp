#include <iostream>
using namespace std;
string StudentName[100];
int RollNo[100];
void Create(string name, int number);
void Retrieve(string name);
void Update(int previous, int number);
void Delete(string name);

main(){
    int choice=0;
    cout <<" 1. Add Student (Create)" <<endl;
    cout <<" 2. Search a Student by Name (Retrieve)" << endl;
    cout <<" 3. Change the Roll Number of the Student (Update)" << endl;
    cout <<" 4. Delete a Student by Name (Delete)"<< endl;
    for(int i=0; i<100; i++){
        StudentName[i]="none";
        RollNo[i]=-1;
    }
    while(choice!=5){
    cout << " Enter Your Choice 1,2,3 or 4(enter 5 to exit): "<<endl;
    cin >> choice;
    if(choice==1){
        string name;
        int number;
        cout << "Enter the Name of the student: ";
        cin >> name;
        cout << "Enter the Roll Number: ";
        cin >> number;
        Create(name, number);
    }
    else if(choice==2){
        string name;
        cout << "Enter the Name of the student: ";
        cin >> name;
        Retrieve(name);
    }

    else if(choice==3){
        int number, previous;
        cout << "Enter the Roll number you want to change: ";
        cin >>previous;
        cout << "Enter the new Roll Number: ";
        cin >> number;
        Update(previous, number);
        
    }
    else if(choice==4){
        string name;
        cout <<"Enter the name of student you want to delete";
        cin >> name;
        Delete(name);
    }
    }

}
void Create(string name, int number){
    for(int i=0; i<100; i++){
        if(StudentName[i]=="none" && RollNo[i]==-1){
            StudentName[i]=name;
            RollNo[i]=number;
            break;
        }
    }
}
void Retrieve(string name){
    for(int z=0; z<100; z++){
        if(StudentName[z]==name){
         cout <<"Student Name: " << StudentName[z] << endl << "Roll Number: " << RollNo[z]<< endl;
         break;
        }
    }
}
void Update(int previous, int number){
    string name;
    cout << "Enter the Name of the student: ";
    cin >> name;
    for(int x=0 ; x<100; x++){
        if(StudentName[x]==name && RollNo[x]==previous){
            RollNo[x]=number;
            break;
        }

    }
}
void Delete(string name){
    for(int y=0 ; y<100; y++){
        if(StudentName[y]==name){
            StudentName[y]="none";
            RollNo[y]=-1;
            break;
        }
    }
}