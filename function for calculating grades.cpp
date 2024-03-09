//function for calculating grades
char* calculateGrades(int arr[], int size) {

	char* chr = new char[size];

	for (int i = 0; i < size; i++) {

		if (arr[i] > 100)
			chr[i] = 'O';
		else if (arr[i] > 90)
			chr[i] = 'A';
		else if (arr[i] > 75)
			chr[i] = 'B';
		else if (arr[i] > 60)
			chr[i] = 'C';
		else if (arr[i] > 50)
			chr[i] = 'D';
		else if (arr[i] >= 0)
			chr[i] = 'F';

	}

	return chr;
}
