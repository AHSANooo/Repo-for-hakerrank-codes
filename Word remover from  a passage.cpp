#include <iostream>

using namespace std;

void wordremover(char arr1[], char arr2[], char arr3[]) ;
int main() {

const int size = 501, sizef = 25, sizer = 25;

char a1[size], a2[sizef], a3[size];
    

cout << "enter the string : " << endl;
cin.get(a1, size);

cin.ignore();
	
cout << "enter the word : ";

cin.get(a2, sizef);

cin.ignore();

wordremover(a1, a2, a3);

cout << "New string : " << a3 << endl;

return 0;

}

void wordremover(char arr1[], char arr2[], char arr3[]) 

{

int endi = 0; 

for (int i = 0; arr1[i] != '\0'; i++) 

{

int wordi = 0; 

int tempi = i; 

for (; arr1[tempi] != '\0' && arr2[wordi] != '\0' && arr1[tempi] == arr2[wordi]; tempi++, wordi++);

if (arr2[wordi] == '\0') 

{
            
i = tempi - 1; 

}

else 

{

arr3[endi] = arr1[i];

endi++;

}

}

arr3[endi] = '\0'; 

return;

}

