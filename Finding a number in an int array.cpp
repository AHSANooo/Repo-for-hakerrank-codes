#include<iostream>

using namespace std;
int main(){

const	int rows=3 , clms=2;


	//uncomment to input rows and columns
	/*cout<<"Enter the number of rows : ";
	cin>>rows;
	cout<<"Enter the number of columns : ";
	cin>>clms;*/
	
	int arr[rows][clms];
	cout<<"Enter the elements : "<<endl;
	
			for (int i=0;i<rows;i++)
		{
			for(int j=0;j<clms;j++)
			{
			cin>>arr[i][j];
			}
		
		}
	
	
	cout<<"The matrix is : "<<endl;
		for (int i=0;i<rows;i++)
		{
			for(int j=0;j<clms;j++)
			{
			cout<<arr[i][j]<<" ";
			}cout<<endl;
		
		}cout<<endl;
		int a;
	cout<<"Enter the number to be found : ";
	cin>>a;int i=0,j=0;
				for ( i=0;i<rows;i++)
		{
			for( j=0;j<clms;j++)
			{
			if(a==arr[i][j])
			break;
			}
		
		}
	cout<<"The value of "<<a<<" is at ("<<i<<","<<j<<")"<<endl;



return 0;
}
