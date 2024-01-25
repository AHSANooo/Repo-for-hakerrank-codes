#include<iostream>
using namespace std;
int main()
{
float a;
cout<<"Input:";
cin>>a;
if(a>=0)

{
if (a>100.0)
cout<<"Output : Invalid input";
else if (a>=90.0)
cout<<"Output : Grade A";
else if (a>=80.0)
cout<<"Output : Grade B";
else if(a>=70.0)
cout<<"Output : Grade C";
else 
cout<<"Output : Grade D";





}
else
cout<<"Output : Invalid input";


return 0;
}
