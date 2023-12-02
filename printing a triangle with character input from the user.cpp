/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>
#include <cstring>

using namespace std;

void conc(string &, char  );

int main() {
	
	int size;
	string c="";char ch;
	cout<<"Enter the size of triangle : ";
	cin>>size;
	
	for(int i=1;i<=size;i++ )
	{
		cout<<"With what character should the line<"<<i<<"> be printed : ";
		cin>>ch;
		for(int j=1;j<i;j++)
		{
		conc(c,' ');
		}
		
		for(int j=0;j<=size-i;j++)
		{
		conc(c,ch);
		}conc(c,'\n');
	
	}
	
	cout<<"The triangle is : "<<endl<<c;
	
	
    return 0;
}
void conc(string &s, char ch)
{

s+=ch;
return;
}
