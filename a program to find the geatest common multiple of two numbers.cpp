//a program to find the geatest common multiple of two numbers

#include<iostream>

using namespace std;

int main () {
	int n1,n2,smaller,larger;
	cin>>n1>>n2;
			smaller = (n1>n2)? n2: n1;//finding the smaller
			larger = (n1>n2)? n1: n2;//find the larger
	
	for (int i=smaller;i>0; i-- )
	{
	if(smaller%i==0)
	if(larger%i==0)
	{cout<<i;
	break;}
	
	
	}
	
	
	
return 0;
}
