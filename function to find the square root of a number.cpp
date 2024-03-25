//function to find the square root of a number

int squareRoot(const int a) {

	for (int i = 0; i < a; i++) {

		if (i * i <= a && (i + 1) * (i + 1) > a)
			return i;

	}




}
