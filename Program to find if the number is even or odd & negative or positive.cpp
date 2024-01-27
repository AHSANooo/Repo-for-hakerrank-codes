#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Input:";
cin>>a;

if (a>0&&(a%2==0))
cout<<"Output : Positive and even";
else if (a==0)
cout<<"Output : Zero and Even";
else if (a<0&&(a%2==0))
cout<<"Output : Negative and even";
else if (a>0&&(!(a%2==0)))
cout<<"Output : Positive and Odd";
else if (a<0&&(!(a%2==0)))
cout<<"Output : Negative and Odd";









return 0;
}
