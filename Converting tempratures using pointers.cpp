/*Name : Muhammad Ahsan
Roll no. : 23I-0553
section : E*/
#include <iostream>
#include <cstring>

using namespace std;

void CtoK(float&);
void FtoC(float&);
void KtoF(float&);

int main() {

float c,f,k;
cout<<"Enter the temprature in Centigrade : ";
cin>>c;
cout<<"Enter the temprature in Fahrenheit : ";
cin>>k;
cout<<"Enter the temprature in Kelvin : ";
cin>>f;

CtoK(c);
FtoC(f);
KtoF(k);


cout<<"Centigrade to Kalvin : "<<c<<endl;
cout<<"Kalvin to Fahrenheit : "<<k<<endl;
cout<<"Fahrenheit to Centigrade : "<<f<<endl;

    return 0;
}
void CtoK(float&c)
{
c=c+273.15;

}
void FtoC(float&f)
{
f=(f-32)*59;
}
void KtoF(float&k)
{
k=k-273.15+32;
}

