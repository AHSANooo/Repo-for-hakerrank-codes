/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>
#include <cstring>

using namespace std;

void swap(int&,int&);

int main() {

int	n1=0,n2=0;

cout<<"Enter n1 : ";
cin>>n1;

cout<<"Enter n2 : ";
cin>>n2;	
	swap(n1,n2);
	
	cout<<"n1 is "<<n1<<endl<<"n2 is "<<n2<<endl;
	
    return 0;
}
void swap(int&a,int&b)
{
a=a^b;
b=a^b;
a=a^b;

return;
}
