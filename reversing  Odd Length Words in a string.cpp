#include <iostream>

using namespace std;

void reverseOddLengthWords(char arr1[], char arr2[]) ;

int main() {

const int size = 500;

char a1[size], a2[size];
    

cout << "enter the string : " << endl;
cin.get(a1, size);

cin.ignore();
	
reverseOddLengthWords(a1, a2);

cout << "New string : " <<a2<< endl;

return 0;

}

void reverseOddLengthWords(char arr1[], char arr2[]) 

{
int endi = 0; 

for (int i = 0; arr1[i] != '\0'; i++) 
    
{

int wordi = 0;

int tempi = i; 

for (; arr1[tempi] != '\0' && arr2[wordi] != '\0' && arr1[tempi] == arr2[wordi]; tempi++, wordi++);
 
if (arr2[wordi] == '\0') 

{
         
int wordLength = tempi - i;

if (wordLength % 2 == 1) 

{
                
int reverseIndex = endi - 1;

for (int ri = i; ri < tempi; ri++, reverseIndex--) 
                
{
arr1[ri] = arr2[reverseIndex];

}

}

i = tempi - 1; 

}

else 

{

arr2[endi] = arr1[i];

endi++; 

}

}

arr2[endi] = '\0'; 

    return;

}

