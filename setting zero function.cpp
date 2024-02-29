//This function, setZeroes, takes a 2D array (arr), along with its number of rows (rows) and columns (cols) as parameters. The purpose of this function is to modify the input array such that if any element in the array is zero, then the entire row and column containing that element are set to a special value (-999 in this case).

void setZeroes(int** arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (arr[i][j] == 0) {

				for (int k = 0; k < rows; k++) {

					arr[k][j] = -999;

				}

				for (int l = 0; l < cols; l++) {
					arr[i][l] = -999;
				}
			}


		}

	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			if (arr[i][j] == -999)
				arr[i][j] = 0;
		}

	}



}
