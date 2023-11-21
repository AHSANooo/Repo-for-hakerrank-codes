/*
Name : Muhammad Ahsan
Roll no. : 23I-0553
Assigment#2
*/
#include<iostream>
#include<string>
#include<ctime>
#include<cmath>

using namespace std;
int main(){

	int p1roll, p2roll,tscore1=0,tscore2=0,dp11,dp12,dp21,dp22,winner,l1,l2;
	string p1name,p2name;
	cout<<"Enter the name of player 1 : "<<endl;//getting the name of 1st player
	getline(cin,p1name);
	cout<<"Enter the Roll no. of player 1(only numbers) : "<<endl;//getting the rollno of 1st player
	cin>>p1roll;
	
	cin.ignore();//to ignore the \n escape sequence (ni to p2name main \n store ho jata hy)
	
	l1 = p1name.length();
		char ch1 = p1name.at(l1-1);

	
		
	l1 =  (ch1==65||ch1==97) ? 1 : (ch1==66||ch1==98) ? 2 : (ch1==67||ch1==99) ? 3 : (ch1==68||ch1==100) ? 4 : (ch1==69||ch1==101) ? 5 : (ch1==70||ch1==102) ? 6 : (ch1==71||ch1==103) ? 7 : (ch1==72||ch1==104) ? 8 : (ch1==73||ch1==105) ? 9 : (ch1==74||ch1==106) ? 10 : (ch1==75||ch1==107) ? 11 : (ch1==76||ch1==108) ? 12 : 0;

		
	cout<<"Enter the name of player 2 : "<<endl;//getting the name of 2nd player 
	getline(cin,p2name);
	cout<<"Enter the Roll no. of player 2(only numbers) : "<<endl;//getting the rollno of 2nd player
	cin>>p2roll;
	
		cin.ignore();//to ignore the \n escape sequence (ni to p2name main \n store ho jata hy)
		
	l2 = p2name.length();
	char ch2 = p2name.at(l2-1);
		

	l1 = (ch2==65||ch2==97) ? 1 : (ch2==66||ch2==98) ? 2 : (ch2==67||ch2==99) ? 3 : (ch2==68||ch2==100) ? 4 : (ch2==69||ch2==101) ? 5 : (ch2==70||ch2==102) ? 6 : (ch2==71||ch2==103) ? 7 : (ch2==72||ch2==104) ? 8 : (ch2==73||ch2==105) ? 9 : (ch2==74||ch2==106) ? 10 : (ch2==75||ch2==107) ? 11 : (ch2==76||ch2==108)? 12 : 0;
 
		
		string free;int randn;
		
	for (int i =1;i<=5; ++i)	
	{
		cout<<"Player 1 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 1
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp11= randn;
		cout<<"The number is "<<dp11<<endl;
		
		
		
		cout<<"Player 1 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 1
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp12= randn;
		cout<<"The number is "<<dp12<<endl;
		
		

	if((dp11+dp12)==((p1roll%10)+((p1roll/10)%10)))
		{
		
		tscore1 += (p1roll%10);

		}
	if((dp11+dp12)==ch1)
		{
		tscore1+=5;
		}	
		
				if((pow((dp11+dp12),2)-4*(dp11+dp12))==0)
					{
					cout<<"Congratulation! You got another turn."<<endl;
					 cout<<"Player 1 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 1
				getline(cin,free);//to store a rough value
				srand(time(0)); //the starting random number is >zero 
				randn = rand()%6+1;//the ending randow number is <7
				dp11= randn;
				cout<<"The number is "<<dp11<<endl;
		
		
		
				cout<<"Player 1 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 1
				getline(cin,free);//to store a rough value
				srand(time(0)); //the starting random number is >zero 
				randn = rand()%6+1;//the ending randow number is <7
				dp12= randn;
				cout<<"The number is "<<dp12<<endl;
		
		

			if((dp11+dp12)==((p1roll%10)+((p1roll/10)%10)))
				{
 		
				tscore1 += (p1roll%10);

				}
			if((dp11+dp12)==ch1)
				{
				tscore1+=5;
				}	
					}
		
		cout<<"Player 2 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 2
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp21= randn;
		cout<<"The number is "<<dp21<<endl;
		
		
		
		
		cout<<"Player 2 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 2
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp22= randn;
		cout<<"The number is "<<dp22<<endl;


	if((dp21+dp22)==((p2roll%10)+((p2roll/10)%10)))
			{
			
			tscore2 += (p2roll%10);
	
			}
		
	if(ch2==(dp21+dp22))
		{
		tscore2+=5;
		}
		
			if((pow((dp21+dp22),2)-4*(dp21+dp22))==0)
			{
			cout<<"Congratulations! You have got another turn"<<endl;
			cout<<"Player 2 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 2
			getline(cin,free);//to store a rough value
			srand(time(0)); //the starting random number is >zero 
			randn = rand()%6+1;//the ending randow number is <7
			dp21= randn;
			cout<<"The number is "<<dp21<<endl;
		
		
		
		
			cout<<"Player 2 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 2
			getline(cin,free);//to store a rough value
			srand(time(0)); //the starting random number is >zero 
			randn = rand()%6+1;//the ending randow number is <7
			dp22= randn;
			cout<<"The number is "<<dp22<<endl;


		if((dp21+dp22)==((p2roll%10)+((p2roll/10)%10)))
				{
			
				tscore2 += (p2roll%10);
	
				}
		
		if(ch2==(dp21+dp22))
			{
			tscore2+=5;
			}
				}
		
		tscore1+=(dp11+dp12);
		tscore2+=(dp21+dp22);




	}
	for (int i=1;tscore1==tscore2;i++)
		{
		cout<<"Player 1 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 1
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp11= randn;
		cout<<"The number is "<<dp11<<endl;
		
		
		
		cout<<"Player 1 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 1
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp12= randn;
		cout<<"The number is "<<dp12<<endl;
		
		

	if((dp11+dp12)==((p1roll%10)+((p1roll/10)%10)))
		{
		
		tscore1 += (p1roll%10);

		}
	if((dp11+dp12)==ch1)
		{
		tscore1+=5;
		}	
		
				if((pow((dp11+dp12),2)-4*(dp11+dp12))==0)
					{
					cout<<"Congratulation! You got another turn."<<endl;
					 cout<<"Player 1 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 1
				getline(cin,free);//to store a rough value
				srand(time(0)); //the starting random number is >zero 
				randn = rand()%6+1;//the ending randow number is <7
				dp11= randn;
				cout<<"The number is "<<dp11<<endl;
		
		
		
				cout<<"Player 1 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 1
				getline(cin,free);//to store a rough value
				srand(time(0)); //the starting random number is >zero 
				randn = rand()%6+1;//the ending randow number is <7
				dp12= randn;
				cout<<"The number is "<<dp12<<endl;
		
		

			if((dp11+dp12)==((p1roll%10)+((p1roll/10)%10)))
				{
 		
				tscore1 += (p1roll%10);

				}
			if((dp11+dp12)==ch1)
				{
				tscore1+=5;
				}	
					}
		
		cout<<"Player 2 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 2
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp21= randn;
		cout<<"The number is "<<dp21<<endl;
		
		
		
		
		cout<<"Player 2 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 2
		getline(cin,free);//to store a rough value
		srand(time(0)); //the starting random number is >zero 
		randn = rand()%6+1;//the ending randow number is <7
		dp22= randn;
		cout<<"The number is "<<dp22<<endl;


	if((dp21+dp22)==((p2roll%10)+((p2roll/10)%10)))
			{
			
			tscore2 += (p2roll%10);
	
			}
		
	if(ch2==(dp21+dp22))
		{
		tscore2+=5;
		}
		
			if((pow((dp21+dp22),2)-4*(dp21+dp22))==0)
			{
			cout<<"Congratulations! You have got another turn"<<endl;
			cout<<"Player 2 roll your dice1 by pressing enter key"<<endl;//to give a prompt to the player 2
			getline(cin,free);//to store a rough value
			srand(time(0)); //the starting random number is >zero 
			randn = rand()%6+1;//the ending randow number is <7
			dp21= randn;
			cout<<"The number is "<<dp21<<endl;
		
		
		
		
			cout<<"Player 2 roll your dice2 by pressing enter key"<<endl;//to give a prompt to the player 2
			getline(cin,free);//to store a rough value
			srand(time(0)); //the starting random number is >zero 
			randn = rand()%6+1;//the ending randow number is <7
			dp22= randn;
			cout<<"The number is "<<dp22<<endl;


		if((dp21+dp22)==((p2roll%10)+((p2roll/10)%10)))
				{
			
				tscore2 += (p2roll%10);
	
				}
		
		if(ch2==(dp21+dp22))
			{
			tscore2+=5;
			}
		}
	
	}
	
	
	
	
	
	
	
	cout<<"Player 1 score is : "<<tscore1<<endl<<"Player 2 score is : "<<tscore2<<endl;
	
		winner = (tscore1>tscore2)? 1 : 2;	
	
	cout<<"Congratulations!"<<endl;
	cout<<"Player "<<winner<<" is the winner!";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

