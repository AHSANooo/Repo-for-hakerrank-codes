/* Name : Muhammad Ahsan
Roll no. : 23I-0553
Section : E */
#include<iostream>

using namespace std;

int coin_tossing(int);
int flip();

int main(){
		srand(time(0));
	int n , counth;
	cout<<"Enter an integer : "<<endl;
	cin>>n;
counth =coin_tossing(n);
int countt = n-counth;
	
cout<<"The number of heads : "<<counth<<endl;
 cout<<"The number of tails : "<<countt<<endl;




return 0;
}


int coin_tossing(int a)
	{
	int x,counth=0, countt=0;
	for(int i=0;i<a;i++)
	{
	x = flip();
	if(x==1)
	{counth++;
	cout<<"Heads"<<endl;}
	else
	cout<<"Tails"<<endl;
	
		
	
	
	}
	return counth;
	
	}
	
int flip()
	{
	
	int x = rand()%2;
	
	return x;	

	
	
	
	}
