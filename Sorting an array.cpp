/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

void decreaseSort(int[],int size);

int main() {
	
const int size=6;
int arr[size];
	
	cout<<"Enter the values : ";
	
	for(int i=0;i<size-1;i++)
	{
		cin>>arr[i];
	}
	decreaseSort(arr,size);


	cout<<"Sorted array is: "<<endl;
		for(int i=0;i<size-1;i++)
	{
		cout<<arr[i];
	}
	
	
    return 0;
}
void decreaseSort(int arr[],int size)
{
int temp =0;
	for (int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-2;j++)
		{
			if(arr[j]<arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
}
