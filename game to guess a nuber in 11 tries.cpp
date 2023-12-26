#include<iostream>
#include<time.h>
using namespace std;
int main(){
int x,n,i=1;
srand(time(0));
x=rand()%101;
cout<<"Hi! I'm thinking of a random number between 1 and 100."<<endl;
while(i<11)
{

cout<<"Guess what number I am thinking of: ";
cin>>n;
if(n>0&&n<101){
if(n==x){cout<<"You guessed the right number";return 0;}
else if(n<x){cout<<"Too low"<<endl;}
else
{cout<<"Too high"<<endl;}




}
else {cout<<"Invalid Input!";}
i++;
}




return 0;
}
