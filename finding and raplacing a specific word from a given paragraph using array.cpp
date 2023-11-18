#include <iostream>

using namespace std;

void wordreplacer(char[], char[], char[], char[]);//prototype for replacement

int main() {

    const int size = 501, sizef = 25, sizer = 25;//declaring

    char arr1[size], arr2[sizef], arr3[sizer], arr4[size];
    
    while(1)
    {

    cout << "Enter the sentence : " << endl;//prompt for input sentence
    cin.get(arr1, size);
    cin.ignore();
	
	if(arr1[0]=='\0')//exiting condition
	{
	
	cout<<"Exiting..."<<endl;
	break;
	
	}
	
    cout << "Enter the word to find : ";//prompt for input word finding
    cin.get(arr2, sizef);
    cin.ignore();

    cout << "Enter the word to replace it : ";//prompt for input word replcement
    cin.get(arr3, sizer);
    cin.ignore();

    wordreplacer(arr1, arr2, arr3, arr4);
    cout << "Result is : " << arr4 << endl;
    
    }
    return 0;
}
// defining the function
void wordreplacer(char arr1[], char arr2[], char arr3[], char arr4[]) 
{

int endi=0;//ending index i.e, index of the word
    for (int i = 0; arr1[i] != '\0'; i++)//looping untill the end of the sentence 
    {
        int wordi= 0;//word index
        int tempi = i;//temporary index to store the starting index of the word

        for(; arr1[tempi]!='\0' && arr2[wordi]!='\0' && arr1[tempi]==arr2[wordi]; tempi++, wordi++);//to increase the index of the word and that in the sentence to the end of the word

        if(arr2[wordi]=='\0') 
        {
            for(int ri = 0; arr3[ri] != '\0'; ri++, endi++) //replacing the word
            {
                arr4[endi] = arr3[ri]; 
            }
            	i = tempi-1; // Adjusting for the increment in the outer loop
        }
         else 
        {
            arr4[endi] = arr1[i];endi++; //replacing the array
        }
    }

    arr4[endi] = '\0';//to indicate the ending of the array

return;

}
