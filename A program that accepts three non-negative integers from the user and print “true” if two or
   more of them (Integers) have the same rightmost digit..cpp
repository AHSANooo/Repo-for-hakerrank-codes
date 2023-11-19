#include <iostream>
using namespace std;
int main(){
/*  A program that accepts three non-negative integers from the user and print “true” if two or
   more of them (Integers) have the same rightmost digit.*/

int fst,sec,trd;
	cout<<"Enter the first number :"<<endl;
	cin>>fst;
	cout<<"Enter the 2nd number :"<<endl;
	cin>>sec;
	cout<<"Enter the 3rd number :"<<endl;
	cin>>trd;
	fst%=10;
	sec%=10;
	trd%=10;
bool ans= (fst==sec) || (fst==trd) || (trd==sec) ;
	cout<<"The result is:";
	cout<<boolalpha<<ans<<endl;

return 0;
}
