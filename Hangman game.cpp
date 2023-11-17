#include <iostream>
using namespace std;



char arr[100][20] = {
    {"Elephant"},{"Telescope"},{"Whisker"},{"Harmony"},{"Programming"},{"Velocity"},
    {"Mango"},{"Cascade"},{"Keyboard"},{"Zephyr"},{"Enigma"},{"Quasar"},{"Galactic"},{"Symphony"},{"Fast"},{"Kaleidoscope"},
    {"Nebula"},{"Serendipity"},{"Algorithm"},{"Cascade"},{"Jubilant"},{"Zenith"},{"Phoenix"},{"Raspberry"},{"Hypnotic"},
    {"Venture"}, {"Dazzle"},{"Quicksilver"},{"Bubblegum"},{"Quantum"},{"Marathon"},{"Symphony"},
    {"Luminous"},{"Stellar"},{"Velocity"},{"Gazebo"},{"Labyrinth"},{"Pixel"},{"Synchronize"},{"Lullaby"},
    {"Safari"},{"Mirage"},{"Quasar"},{"Vibrant"},{"Horizon"},{"Enchant"},{"Odyssey"},{"Kite"},
    {"Nimbus"},{"Chocolate"}, {"Melody"}, {"Azure"}, {"Nebula"},{"Harmony"},{"Twilight"},{"Avalanche"},
    {"Vibrant"},{"Zephyr"},{"Bumblebee"},{"Infusion"},{"Serenity"},{"Nomad"},{"Python"},{"Caramel"},
    {"Enigma"},{"Firefly"},{"Cascade"},{"Quasar"},{"Velvet"},{"Utopia"},{"Radiant"},{"Dynamic"},
    {"Conundrum"},{"Stellar"},{"Melancholy"},{"Serendipity"},{"Velocity"},{"Cascade"},{"Quantum"},
    {"Lullaby"},{"Nebula"},{"Symphony"},{"Odyssey"},{"Enchant"},{"Galvanize"},{"Kaleidoscope"},
    {"Nimbus"},{"Quicksilver"},{"Utopia"},{"Vibrant"},{"Chocolate"},{"Zephyr"},{"Eleventh"},
    {"Velocity"},{"Harmony"},{"Cascade"},{"Serendipity"},{"Labyrinth"},{"Odyssey"},{"FAST"}
			};//declaring a global array
 

void life1();//prototypes for printing lifes
void life2();
void life3();
void life4();
void life5();
void life6();
void life0();

void switch1(int);



int main() {
	
	const int size=20;//you can change the size of the words
		
	srand(time(0));	
	
	
	const int namesize=50;int x=0,tempcountwl=0;
	char name [namesize];
	
	cout<<"Hangman GAME!"<<endl<<"Enter your name ==> ";//prompt for getting name
	cin.get(name,namesize);
	
	x= rand()%100;
	char arr2[size];
	
		for(int i=0;arr[x][i]!='\0';i++)//accigning the randomly picked word
		{	
			arr2[i]=arr[x][i];
			tempcountwl++;
		}
		
		
		
 
char c,sim;bool flag = true;int varlife=1;
	while(1)
	{
  	cout<<"Would you like to check the letter with you name? (y/n) ";//checking if the user wants to play with his name
 	cin>>c;
 		if(c=='y'||c=='Y')
 		{
 			for(int i=0;name[i]!='\0';i++)
 			{
 				for(int j=0;j<=tempcountwl;j++)
 				{
 				
 					if(arr2[j]==name[i])
 					{flag=false;sim=arr2[j];break;}
 				
 				}
 			
 			
 			}//for(int i=0;i<=tempcountwl;i++)cout<<arr2[i];cout<<endl;cout<<sim;	testing if the code is working fine or not
 			if(flag==false)
 			{
 				cout<<"Guess the character"<<endl;
 				cin>>c;
 				if(c!=sim)
 				{
 					varlife+=2;
 					cout<<"2 lifes deducted! "<<endl;break;//if guessed worng
 				}
 				else if(c==sim)
 				{
 					cout<<"Got 1 extra life!"<<endl;//if guessed right 
 					varlife-=1;break;
 				}
 			}
 			else
 			{
 			cout<<"No similar character found!"<<endl;break;//if ni similar character in name and word
 			}
 		}
 		else if (c=='n'||c=='N')
 		{
 			varlife=1;
 			cout<<"As you wish!"<<endl;//choosing not to play by name
 			break;
 		
 		}
 		else
 		cout<<"Invalid input!"<<endl<<"Try again!"<<endl;//inout validation
 	}
 	char userinput;
 	char arr3[size];// making the whole word'_'
	for (int j = 0; j <=tempcountwl; j++) {
	    arr3[j] = '_';
	}

 		while(1)
 		{
 		
 			flag=true;
 			
			switch1(varlife);
			if(varlife==6)
			{cout<<"You lost"<<endl;break;}//losing condition
			
			
			cout<<"Enter the character : ";
			cin>>userinput;
			
			for (int j = 0; j <=tempcountwl; j++)//checking the words and guessed char
			{
			   // if (arr2[j] != '\0')
			    //{
			        if (arr2[j] == userinput)
			        {
			            flag = false;
			            arr3[j] = userinput;
			        }
			       
			  //  }
			}


			
			
	for(int j=0;j<=tempcountwl;j++)//printing the part of word guessed
			{
 			
			cout<<arr3[j];
 					
 			
 			}cout<<endl;//cout<<arr2;  for testings
 				
				if(flag)
				{
					cout<<"1 MORE Life LOST!"<<endl;
					varlife++;
				
				} 
				else
				{bool flag2 = true;
					for (int j = 0; j <=tempcountwl; j++) 
					{
					    if (arr3[j] == '_') 
					    {
					        flag2 = false;
					        break;
					    }
					}
				if (flag2)
				 {
				    cout << "You Won!";
				    break;
				 }
				}

			
		}



    return 0;
}

//the definations of the functions

void life1()
{

        cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}

void life2()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<" /    |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}


void life3()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<" /|   |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}


void life4()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<" /|\\  |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}


void life5()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<" /|\\  |"<<endl
             <<" /    |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}


void life6()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"  o   |"<<endl
             <<" /|\\  |"<<endl
             <<" / \\  |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}



void life0()
{

    cout <<"  +---+"<<endl
             <<"  |   |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"      |"<<endl
             <<"========="<<endl;
}


 void switch1(int lifes)
 {
 
 	switch (lifes)
 	{
 		case 0:
 		{life0();
 		break;}
 	
 		case 1:
 		{life1();
 		break;}
 		
 		case 2:
 		{life2();
 		break;}
 		
 		case 3:
 		{life3();
 		break;}
 		
 		case 4:
 		{life4();
 		break;}
 		
 		case 5:
 		{life5();
 		break;}
 		
 		case 6:
 		{life6();
 		break;}
 		
 	
 	
 	
 	
 	}
 
 
 }

