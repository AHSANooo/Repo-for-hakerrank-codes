void ranFun(int rows, int cols) {
	
	srand(time(0));
	
	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {

		arr[i] = new int[cols];

	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			arr[i][j] = rand() % 2000+1;

		}

	}

	cout << "The values are : " << endl;

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			cout<<arr[i][j]<<" ";

		}
		cout << endl;
	}

	//Deallocate memory for the original matrix
		for (int i = 0; i < rows; ++i) {
		     delete[] arr[i];
		 }
		 delete[] arr;

}
