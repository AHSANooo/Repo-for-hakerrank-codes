/*Name : Muhammad Ahsan
Roll no. : 23I-0553
Section : E*/
#include<iostream>

using namespace std;
int main(){

const int size=20;
	char arr[size];
	cout<<"Enter Character array : ";
	cin>>arr;
	
	
	int len=0;
	for(int i=0; i<size ; i++)
	{
	
		if(arr[i]=='\0')
		break;
		len++;
	}
	
		
	
	//cout<<len;
	
	int count =0,j=len-1;
	for(int i=0; i<len/2 ;i++)
	{
	if(arr[i]!=arr[j])
	break;
	count++;j--;
	
	}
	
	if(count==len/2)
	cout<<"It is a palindrome"<<endl;
	else
	cout<<"The given is not a palindrome!"<<endl;


return 0;
} 
