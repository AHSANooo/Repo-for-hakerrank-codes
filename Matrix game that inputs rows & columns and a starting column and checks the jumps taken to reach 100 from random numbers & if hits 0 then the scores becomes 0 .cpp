#include <iostream>

using namespace std;

void draw(int,int);//all function prototypes
void play(int,int ,int);
void showoutput(int,int);


int arr[100][150];



int main() {
	
	int rows;
	srand(time(0));
	
	while(1)//input validation for the rows
	{ 
	cout<<"Enter the number of rows : "<<endl; 
	cin>>rows;
		if(!(rows>1&&rows<100))
		{
		cout<<"Try again!"<<endl;
		}
		else break;
	}
	
	int cols;
	while(1)//input validation for the columns
	{ 
	cout<<"Enter the number of columns : "<<endl;
	cin>>cols;
		if(!(cols>1&&cols<150))
		{
		cout<<"Try again!"<<endl;
		}
		else break;
	}
	
	int s;
	while(1)//input validation for the s
	{ 
	cout<<"Enter the s  : "<<endl;
	cin>>s;
		if(!(s>0&&s<rows))
		{
		cout<<"Try again!"<<endl;
		}
		else break;
	}
	
	draw(rows,cols);
	play(rows, cols ,s);
	
	
	
	
	
    return 0;
}//the definations of the functions 
void draw(int n,int m)
{

	//int arr[n][m];//assigning the random
	
	for (int i=0;i<n;i++)
	{
	
		for(int j=0; j<m;j++)
		{
		
			arr[i][j]=rand()%m+2;
			cout<<arr[i][j]<<" ";
		
		}cout<<endl;
	
	}



}
// The definition of the play function
void play(int n,int m,int s)
{
	int score=0,jumps=0;
    
    	int k=0,q=0,max=100;
 

	while (score<=max)
	{
        
		int value=arr[k][q];

        // will move to cell (k, q), where 'k' starts at 0 and increments with each jump
        
	q=(q+1)%m;

        // if the cell value at (k, q) is 0, reset the player's score to zero
		if (value==0)
		{
			score=0;
		}
		else
		{

			score+=value;
		}

        
	jumps++;
	}

  
	showoutput(score, jumps);
}

// The definition of the showOutput function
void showoutput(int tscore, int jumps)
{
	cout << "Final Score: " << tscore << endl;
	cout << "Number of Jumps: " << jumps << endl;
}
