/*Name : Muhammad Ahsan
roll no. : 23I-0553
sec. : E*/
#include<iostream>
using namespace std;

int main(){
	int n,temp2;
	cout<<"Enter the size : ";//printing the diamond shape of specific size
	cin>>n;
	int temp1;
	temp1=temp2=n;
	for (int i=1;i<=n;i++)
	{
		for( int j=1;j<=temp1;j++)
		{
		cout<<" ";
		}cout<<"*";
		for (int k=2;k<(i*2)-1;k++)
		{cout<<" ";
		}if(i!=1)cout<<"*";cout<<endl;
	temp1--;
	
	}
	for (int i=1; i<=n-1;i++)
	{
		for(int j=0;j<=i;j++)
		cout<<" ";cout<<"*";
		for(int j=1;j<=((temp2-1)*2)-3;j++)
		cout<<" ";if(i!=n-1)cout<<"*";
	
	cout<<endl;
	temp2--;
	
	
	
	
	} 
	
return 0;
}
