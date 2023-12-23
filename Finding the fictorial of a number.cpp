#include<iostream>
using namespace std;
int main(){
int n,fict;
cout<<"Enter a number:";
cin>>n;
fict=1;
if(n==0)
{cout<<"The fictorial is : 1"<<endl;
}
else if(n>0)
{
while(n>0)
{
fict=fict*n;
n--;
}
cout<<"The fictorial is:"<<fict<<endl;
}
else
cout<<"Invalid Input!";






return 0;
}
