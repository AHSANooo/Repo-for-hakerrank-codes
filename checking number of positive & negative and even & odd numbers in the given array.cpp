
#include <iostream>

using namespace std;

int main () {

int size,p=0,n=0,o=0,e=0;

	cout<<"Input the size of array : ";
	cin>>size;
	int *arr= new  int[size];
	
	cout<<"Input the array : "<<endl;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>=0)
		p++;
		else if(arr[i]<0)
		n++;
		if(arr[i]%2!=0)
		o++;
		else if(arr[i]%2==0)
		e++;
		
		
	
	
	}
		
		
	cout<<"The number of positive is : "<<p<<endl;
	cout<<"The number of negative is : "<<n<<endl;
	cout<<"The number of odd is : "<<o<<endl;
	cout<<"The number of even is : "<<e<<endl; 
	
	delete [] arr;
	
	
return 0;
}
