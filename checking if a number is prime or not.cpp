#include<iostream>
using namespace std;
int main(){

int n;
while(1)
{
cout<<"Enter a number (Enter a negative number to stop): ";
cin>>n;
if(n<0){return 0;}
else if (n==1||n==0){cout<<"Not a prime number"<<endl;}
else{int i=2;
while(i<=n)
{
if (n==i){cout<<"Prime number"<<endl;break;}
else if(n%i==0)
{cout<<"Not a prime number"<<endl;break;}
else
{i++;}




}

}
}


return 0;
}
