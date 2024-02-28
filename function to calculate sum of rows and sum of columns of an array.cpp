void calculateRowColumnSums(int ** arr,int rows  ,int cols , int * rowSums,int* columnSums) {

	int sum = 0;



		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < cols; j++) {

				sum+=arr[i][j];

			}
			rowSums[i] = sum;
			sum = 0;
		}


		
		for (int j = 0; j < cols; j++) {

			for (int i = 0; i < rows; i++) {

				sum += arr[i][j];

			}
			columnSums[j] = sum;
			sum = 0;
		}

		





}
