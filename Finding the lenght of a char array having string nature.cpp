//pr0gram to find the lenght of a string array



#include<iostream>

using namespace std;

int main () {

	char arr[500];
	cin.getline(arr,500);
	cout<<arr<<endl;

	int count=0;
	for (int i=0; i<500;i++)
	{
	if(arr[i]=='\0')
	break;
	count++;
	}
	cout<<count-1;
return 0;
}


