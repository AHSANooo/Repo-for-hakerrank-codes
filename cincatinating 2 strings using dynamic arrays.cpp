/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

int main () {

int size1,size2,size3;

	cout<<"Input the size of string 1 : ";
	cin>>size1;
	char *arr1= new  char[size1+1];
	cout<<"Input the string 1 : ";
	
		for(int i=0;i<size1;i++)
		{
		cin>>arr1[i];
		}
	
	
	
	cout<<"Input the size of string 2 : ";
	cin>>size2;
	char *arr2= new char[size2+1] ;
	cout<<"Input the string 2 : ";
		
		for(int i=0;i<size2;i++)
		{
		cin>>arr2[i];
		}
	
	
	char *arr3= new char[size1+size2+1];
		
		 int temp=0;
		for(int i=0;i<size1;i++)
		{
		arr3[i]=arr1[i];
		temp++;
		}
		
		for(int i=0;i<=size2;i++)
		{
		arr3[temp++]=arr2[i];
		}
		
		
	cout<<"The concatination is : ";
		for(int i=0;i<size1+size2;i++)
		{
		cout<<arr3[i];
		}cout<<endl;
	
	delete [] arr1;
	delete [] arr2;
	delete [] arr3;
	
return 0;
}
