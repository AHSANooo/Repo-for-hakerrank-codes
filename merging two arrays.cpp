/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

int* mergeArrays(const int* arr1, int size1, const int* arr2, int size2);

int main () {

int size1,size2,size3;

	cout<<"Input the size of array 1 : ";
	cin>>size1;
	int *arr1= new  int[size1];
	cout<<"Input the array 1 : ";
	
		for(int i=0;i<size1;i++)
		{
		cin>>arr1[i];
		}
	
	
	
	cout<<"Input the size of array 2 : ";
	cin>>size2;
	int *arr2= new int[size2] ;
	cout<<"Input the array 2 : ";
		
		for(int i=0;i<size2;i++)
		{
		cin>>arr2[i];
		}
	
	
		
		
	int *arr3=mergeArrays(arr1,size1,arr2,size2);
	
	cout<<"The merged array is : ";
		for(int i=0;i<size1+size2;i++)
		{
		cout<<arr3[i];
		}
	
	delete [] arr1;
	delete [] arr2;
	delete [] arr3;
	
return 0;
}

int* mergeArrays(const int* arr1, int size1, const int* arr2, int size2) {

int *arr3= new int[size2+size1] ;

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

return arr3;
}
