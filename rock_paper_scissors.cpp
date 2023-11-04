#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
int c;
int g;
cout<<"welcome to the rock paper scissor game"<<endl;

while(true){
cout<<"Enter 1 for rock , 2 for paper ,3 for scissors and 4 to exit "<<endl;
cin>>c;
switch (c)
{
case 1: cout<<"User : Rock ----------";
    srand(time(0));
    g = rand() % 3 ;
    if (g == 0){
        cout<<"Cpu : Rock"<<endl;
        cout<<"Result --- Draw"<<endl;
    }
    else if (g == 1){
        cout<<"Cpu : Paper"<<endl;
        cout<<"Result --- Cpu won"<<endl;
    }
    else if (g == 2){
        cout<<"Cpu : Scissors"<<endl;
        cout<<"Result --- User Won"<<endl;
    }
    break;
    case 2: cout<<"User : Paper ----------";
    srand(time(0));
    g = rand() % 3 ;
    if (g == 0){
        cout<<"Cpu : Rock"<<endl;
        cout<<"Result --- User Won"<<endl;
    }
    else if (g == 1){
        cout<<"Cpu : Paper"<<endl;
        cout<<"Result --- Draw"<<endl;
    }
    else if (g == 2){
        cout<<"Cpu : Scissors"<<endl;
        cout<<"Result --- Cpu Won"<<endl;
    }
    break;
    case 3: cout<<"User : Scissors ----------";
    srand(time(0));
    g = rand() % 3 ;
    if (g == 0){
        cout<<"Cpu : Rock"<<endl;
        cout<<"Result --- Cpu Won"<<endl;
    }
    else if (g == 1){
        cout<<"Cpu : Paper"<<endl;
        cout<<"Result --- User Won"<<endl;
    }
    else if (g == 2){
        cout<<"Cpu : Scissors"<<endl;
        cout<<"Result --- Draw"<<endl;
    }
    break;
case 4:
cout<<"Bye"<<endl;
return 0;
break;
default:
cout<<"enter the right choice"<<endl;

    break;
}}
return 0;
}