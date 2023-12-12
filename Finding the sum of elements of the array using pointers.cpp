/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;


int main() {
const int size=5;
int arr[size];
int sum=0;
int	*ptr=arr,*sum1=&sum;

cout<<"Enter the array : "<<endl;
for(int i=0;i<size;i++)
cin>>*(ptr+i);

for(int i=0;i<size;i++)
{
*sum1+=*(ptr+i);

}
	cout<<"The sum is : "<<*sum1<<endl;
	
    return 0;
}

