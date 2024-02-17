#include <iostream>

using namespace std;

int main(){

const int size = 100;

int array[size];

srand(time(0));

int count=0,c=0,ti=0;

for (int i=0;i<size; i++)

{
	
cin >> array[i];

}
	
for (int i=0;i<size; i++)
	
{

for(int j=0; j<size; j++)
		
{
		
if(array[j]==i)
			
count++;
			
}
		
if(count>c)
			
{
			
c=count;
			
ti=i;

}

count=0;
		
}
	
cout<<"The most repeated number is "<<ti;
	
return 0;

}
