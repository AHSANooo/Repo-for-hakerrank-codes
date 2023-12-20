/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>

using namespace std;

int fun(char *arr,int size);

int main () {

int size;
cout<<"Enter the size of array : ";
cin>>size;


cout<<"Enter the array : ";
char *arr= new char[size];
for(int i=0;i<size; i++)
{
cin>>arr[i];
}

int vow=fun(arr,size);

	cout<<"The number of vowels is : "<<vow<<endl;
	cout<<"The number of consonants is : "<<size-vow<<endl;
    return 0;
}
int fun(char *arr,int size){
int vow=0,nvow=0;
for(int i=0;i<size; i++)
{
	if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u')
	vow++;
	else if(arr[i]=='\0');
	else
	nvow++;
}
	
return vow;
}
