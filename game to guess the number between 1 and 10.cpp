//program to guess the number between 1 and 10
#include<iostream>
#include<ctime>




using namespace std;

int main(){
	int cmpn,usern,ans;
	
	
	while(1){
	
	cout<<"Enter a number between 1 and 10: ";
	cin>>usern;if(usern<1||usern>10){cout<<"Program ended!"<<endl;return 0;}
	srand(time(0)); //the starting random number is >zero 
	
		cmpn = rand()%10+1;//the ending randow number is <7
	
	cout<<"Computer number is "<<cmpn<<endl;
	ans=cmpn+usern;
	
	if (ans%2==0)
	cout<<"Player won!"<<endl;
	else
	cout<<"Computer won!"<<endl;
	} 
	
	
return 0;
}
