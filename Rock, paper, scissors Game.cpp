#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Input by player 1 (rock (1), paper (2), or scissors (3).)";
cin>>a;
cout<<"Input by player 2 (rock (1), paper (2), or scissors (3).)";
cin>>b;
switch(a)
	{
	case 1:
		{
		switch(b)
		{case 1:
		cout<<"Draw";
		break;
		case 2:
		cout<<"Player 2 wins";
		break;
		case 3:
		cout<<"Player 1 wins";
		break;}
		break;}
	case 2:
	{
	switch(b)
	{case 1:
	cout<<"Player 1 wins";
	break;
	case 2:
	cout<<"Draw";
	break;
	case 3:
	cout<<"Player 2 wins";
	break;}
	break;}
	case 3:
	{switch(b)
	{case 1:
	cout<<"Player 2 wins";
	break;
	case 2:
	cout<<"Player 1 wins";
	break;
	case 3:
	cout<<"Draw";
	break;
	}
	break;}
}

return 0;
}
