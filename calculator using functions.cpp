/*Name : Muhammad Ahsan
roll no. : 23I-0553
sec. : E*/
#include<iostream>
using namespace std;

	int sum(int n1,int n2);
	int sub(int n1,int n2);
	int prod(int n1, int n2);
	float divi(int ,int );

int main(){
	cout<<"Welcome to my calculator : "<<endl;
	int a,b,x,n;
		cout<<"Enter first number : ";
		cin>>a;
		cout<<"Enter second number : ";
		cin>>b;
	cout<<"Select the operation : "<<endl
	<<"1. Addition"<<endl
	<<"2. Subtraction"<<endl
	<<"3. Multiplicaton"<<endl
	<<"4. Division"<<endl;
	cin>>n;
	
		if(n==1)cout<<"Result : "<<sum(a,b);
	else	if(n==2)cout<<"Result : "<<sub(a,b);
	else	if(n==3)cout<<"Result : "<<prod(a,b);
	else	if(n==4)cout<<"Result : "<<divi(a,b);
		else
		cout<<"Invalid Input!"<<endl;




return 0;
}

	int sum(int n1,int n2)
	{int sum1=n1+n2;
	return sum1;
	}
	
	int sub(int n1,int n2)
	{int sum1=n1-n2;
	return sum1;
	}
	
	float divi(int n1,int n2)
	{float sum1=float(n1)/n2;
	return sum1;
	}
	
	int prod(int n1,int n2)
	{int sum1=n1*n2;
	return sum1;
	}
