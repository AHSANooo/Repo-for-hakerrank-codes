//function to print nth fibonacci series
int fibonacci(int n) {
	
	if (n<=1) {

		return n;

	}

	else {

		return fibonacci(n-1) + fibonacci(n-2);

	}
}
