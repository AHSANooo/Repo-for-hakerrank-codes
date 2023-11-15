#include<iostream>
#include<ctime>
using namespace std;

	void DisplayMenu();//prototype to prompt for x's value
	int Select (int x);//prototype for the choice
	void PracticeAdd();
	void PracticeSub();	
	
	

int main()
{
	
	 // display menu
	DisplayMenu();
	
	//select your choice
	int choice;
	choice = Select( choice);
	
	 //test your choice
		switch( choice )
		{
		 
		case 1:
		  PracticeAdd();
		 break;
		case 2:
		  PracticeSub(); 
		  break;
		  default :
		  cout<<"Error!"<<endl;
		  
		}


//terminate program
 return 0;	
}


    //writting all the function definations for calculations, inputs , out puts 
	void DisplayMenu()
	{
	cout<<"--------Practice Arthemtic--------"<<endl
	<<"1. Addition"<<endl
	<<"2. Subtraction"<<endl
	<<"Enter your choice (1/2) : ";
	}
	int Select (int choice)
	{
	cin>>choice;
	return choice;
	}
		void PracticeAdd()
		{
		int x,y,z,countr=0,countw=0;
		char ch;
		while(1){
		srand(time (0));
		x = rand()%1000+1;
		y = rand()%1000+1;
		
		cout<<x<<" + "<<y<<" "<<"= ? ";
		cin>>z;
		
		if (z==(x+y))
		{
		cout<<"CORRECT"<<endl;// printing for correct answer
		countr++;//counting the correct answers
		}
		else
		{
		countw++;
		cout<<"WRONG"<<endl;
		}
		cout<<"Continue(y/n) ?";
		cin>>ch;
		if(ch=='n')
		{
		cout<<"No. of CORRECT answers = "<<countr<<endl;//printing the count of correct
		cout<<"No. of WRONG answers = "<<countw<<endl;//printing the count false
		break;}
		else if(ch=='y');
		else {
		cout<<"Invalid Input!";
		break;}
			}
		
		}
		
				void PracticeSub()
		{
		int x,y,z,countr=0,countw=0;
		char ch;
		while(1){
		srand(time (0));
		x = rand()%1000+1;
		y = rand()%1000+1;
		
		cout<<x<<" - "<<y<<" "<<"= ? ";
		cin>>z;
		
		if (z==(x-y))
		{
		cout<<"CORRECT"<<endl;
		countr++;
		}
		else
		{
		countw++;
		cout<<"WRONG"<<endl;
		}
		cout<<"Continue(y/n) ?";
		cin>>ch;
		if(ch=='n')
		{
		cout<<"No. of CORRECT answers = "<<countr<<endl;//printing th count of true
		cout<<"No. of WRONG answers = "<<countw<<endl;//printing the count of false
		break;}
		else if(ch=='y');
		else {
		cout<<"Invalid Input!";
		break;}
			}
		
		}
		
		
 
