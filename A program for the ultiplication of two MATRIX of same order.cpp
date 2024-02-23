/*Name : Muhammad Ahsan
Roll no. : 23I-0553
Section : E*/
#include<iostream>

using namespace std;
int main(){

const	int rows1=2,cls1=2,rows2=2,cls2=2;
		int arr1[rows1][cls1],arr2[rows2][cls2];
		
			if (cls1!=rows2){
			cout<<"Non-compatible"<<endl;return 0;}
		
		
	cout<<"Enter the elements of matrax 1 : "<<endl;
	
				for (int i=0;i<rows1;i++)
		{
			for(int j=0;j<cls1;j++)
			{
			cin>>arr1[i][j];
			}
		
		}cout<<endl;
		
		
		cout<<"Enter the elements of matrax 2 : "<<endl;
	
				for (int i=0;i<rows2;i++)
		{
			for(int j=0;j<cls2;j++)
			{
			cin>>arr2[i][j];
			}
		
		}cout<<endl;
		
		
			cout<<"The elements of matrax 1 are : "<<endl;
	
				for (int i=0;i<rows1;i++)
		{
			for(int j=0;j<cls1;j++)
			{
			cout<<arr1[i][j]<<" ";
			}cout<<endl;
		
		}cout<<endl;
		
		cout<<"The elements of matrax 2 are : "<<endl;
	
				for (int i=0;i<rows2;i++)
		{
			for(int j=0;j<cls2;j++)
			{
			cout<<arr2[i][j]<<" ";
			}cout<<endl;
		
		}cout<<endl;
		
		
		
		//now it's the time for the third array
		int arr3[rows1][cls2];
		
		
		cout<<"Enter the elements of resultant matrax are : ";
	
				for (int i=0;i<rows1;i++)
		{
			for(int j=0;j<cls2;j++)
			{
			
			arr3[i][j]=arr1[i][j]*arr2[i][j]+arr1[i][j+1]*arr2[i+1][j];
			
			}
		
		}cout<<endl;
		
		
				cout<<"The elements of result matrax  : ";
	
				for (int i=0;i<rows1;i++)
		{
			for(int j=0;j<cls1;j++)
			{
			cout<<arr3[i][j]<<" ";
			}cout<<endl;
		
		}cout<<endl;



return 0;
}
