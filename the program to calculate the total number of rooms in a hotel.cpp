#include<iostream>
using namespace std;
int main(){
int floors,n=1,rooms,ocr,trooms=0,tocr=0;
float p=0.0;
cout<<"How many floors the hotel has?";
cin>>floors;
if(floors>=0)
{
while(floors>=n)
{
cout<<"Enter the number of rooms in floor "<<n<<" ";
cin>>rooms;
cout<<"Enter the number of occupied rooms";
cin>>ocr;

trooms=rooms+trooms;
tocr=ocr+tocr;

n++;
}
cout<<"The hotel has total "<<floors<<" floors"<<endl;
cout<<"The hotel has total "<<trooms<<" rooms"<<endl;
cout<<"There are "<<tocr<<" occupied rooms"<<endl;
cout<<"There are "<<trooms-tocr<<"empty rooms"<<endl;
p=(float(tocr)/trooms)*100;
cout<<"Percentage of occupied rooms is "<<p<<"%"<<endl;

}
else{
cout<<"Invalid input!"<<endl;
}
return 0;
}
