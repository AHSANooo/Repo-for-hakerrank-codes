#include<iostream>
using namespace std;
int main(){
int fn=0,n,i=1,fn1=0,fn2=0;
cout<<"Enter the number of elements of Fibonacci series : ";
cin>>n;
if(n==1){cout<<" 0 ";}
if(n>=0)
{
while(n>i)
{
fn1=fn2;
cout<<" "<<fn<<" ";
if(fn==0){fn+=1;cout<<fn;}

fn2=fn;

fn=fn1+fn2;

i++;}

}
else
{cout<<"invalid input!"<<endl;
}

return 0;
}
