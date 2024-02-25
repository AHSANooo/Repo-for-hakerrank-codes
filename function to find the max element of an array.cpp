int findMaxElement(int** arr, int rows, int cols) {

	int max = 0;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			
			if(*(*(arr + j) + i)>max)
			max=*(*(arr + j) + i);

		}
		
	}
	return max;


}
