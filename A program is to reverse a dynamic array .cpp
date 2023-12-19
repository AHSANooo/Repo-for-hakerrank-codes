/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

int* reverseArray(int* arr, int size);

int main () {

int size;
cout<<"Input the size of the array : ";
cin>>size;

int *arr= new int[size] ;
	cout<<"Input the array: ";
		
		for(int i=0;i<size;i++)
		{
		cin>>arr[i];
		}

int *rarr= reverseArray(arr,size);

for(int i=0;i<size;i++)
		{
		cout<<rarr[i];
		}cout<<endl;

delete [] rarr;
return 0;
}


int* reverseArray(int* arr, int size) {

int *rarr= new int[size] ;

for (int i=size-1,j=0;j<size;j++,i--)
{
rarr[j]=arr[i];
}
delete []arr;
return rarr;
}
