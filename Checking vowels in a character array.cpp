/*Name : Muhammad Ahsan
Roll no. : 23I-0553
Section : E*/
#include<iostream>

using namespace std;

bool checkvowels(char a);

int main(){

const int size=25;
	char arr[size]; 


	cout<<"Enter the character array : ";
	cin.get(arr,size);
	
	cout<<"The vowels are : ";
				
				
		for(int i=0; arr[i]!='\0';i++)	
		{
			
			if(checkvowels(arr[i])==1)
			{

			cout<<arr[i];
			
			}	
		}cout<<endl;
		char a;
		cout<<"Enter the character to be counted : ";
		cin>>a;
		int count=0;
				for(int i=0; arr[i]!='\0';i++)
				{
				if(arr[i]==a)
				count++;
				
				
				
				
				}
cout<<a<<" is repeated "<<count<<" times "<<endl;

return 0;
}


bool checkvowels(char a)
{
if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
return 1;
else 
return 0;


}
