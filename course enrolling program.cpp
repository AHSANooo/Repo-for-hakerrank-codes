#include<iostream>
using namespace std;
int main()
{
int age,es;
char pc;
cout<<"Input age :";
cin>>age;
cout<<"Input exam score :";
cin>>es;
if(!(age<0))
{if(age>=18&&age<=30)
{
if(es>=60&&es<100)
{if (age<21)
{
cout<<"Enter your parents consent (\'Y\' for yes and \'N\' for no) : ";
cin>>pc;
if(pc=='Y')
cout<<"Eligible to enroll in the course.";
else if(pc=='N')
cout<<"Not eligible to enroll in the course.";
else
cout<<"error in parents concent";
}
else
cout<<"eligible to enroll in the course.";
}
else
cout<<"Not eligible to enroll in the course.";



}
else
cout<<"Not eligible to enroll in the course.";
}else 
cout<<"error in age";

return 0;
}
