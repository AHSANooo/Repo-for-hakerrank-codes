#include<iostream>

using namespace std;

	void cout1();//prototype to prompt for x's value
	void cout2();//prototype to prompt for y's value
	void cout3();//prototype to prompt for z's value
	int cin1();	//prototype to get input
		int FindSum (int x,int y,int z);  //prototype to find sum
		void ShowSum (int Sum);	//prototype to show sum
		float FindAvg (int x,int y, int z);	//prototype to find average
		void ShowAvg (float average);	//prototype to show average
	int FindMax(int x,int y,int z); //prototype to find max
	void ShowMax(int max);  //prototype to show max
	int FindMin(int x,int y,int z); //prototype to find the min
	void ShowMin(int min); //prototype to show min.
	
	

int main()
{
	
	int x=0, y=0, z=0, max=0, min=0;//declare identifiers
				//read three integer numbers , into x,y,z in main
				cout1();
				x = cin1();
				cout2();
				y = cin1();
				cout3();
				z =  cin1();	
				
	
	//find and display the sum and average of x,y,z
	
	int Sum = 0; float Average = 0.0;
	
	Sum =  FindSum	(x,y,z);
	ShowSum	(Sum);
	Average = FindAvg(x,y,z);
	ShowAvg(Average);
	
	
	
	//find and display the max. and min. of x,y,z
	max = FindMax(x,y,z);
	ShowMax(max); 
	min = FindMin(x,y,z);
	ShowMin(min);
	 //terminate
	 return 0;
	
	
	
}


    //writting all the function definations for calculations, inputs , out puts 
	void cout1()
	{
	cout<<"Enter the first number : ";
	
	}
	void cout2()
	{
	cout<<"Enter the second number : ";
	
	}
	void cout3()
	{
	cout<<"Enter the third number : ";
	
	}
		int cin1()
			{int x;
			cin>>x;
			return x;
			}
		int FindSum (int x,int y,int z)
		{
		int sum = x+y+z;
		return sum;
		}
		void ShowSum (int Sum)
		{
		cout<<"The sum is : "<<Sum<<endl;//printing the sum 
		}
		float FindAvg (int x,int y, int z)
		{
		float avg = (x+y+float(z))/(3);
		return avg;
		}
		void ShowAvg (float average)
		{
		cout<<"The average is : "<<average<<endl;//printing the average
		}
	
	int FindMax(int x,int y,int z)
	{
	int max = (x>=y)? (x>=z) ? x : z : (y>=z)? y: z;
	return max;
	}
	void ShowMax(int max)
	{
	cout<<"Maximum : "<<max<<endl;//printing the maximum
	} 
	int FindMin(int x,int y,int z)
	{
	int min = (x<=y)? (x<=z) ? x : z : (y<=z)? y: z;
	return min;
	}
	void ShowMin(int min)
	{
	cout<<"Maximum : "<<min<<endl;//printing the minimum
	}		
		
		
		
		
		
 
