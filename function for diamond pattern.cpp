//function for diamond pattern
void diamond_pattern(int num) {

	static int n = 1;
	if (n == num)
		return;
	else {
		printer((num - n) / 2, ' ');
		printer(n, '*');
		cout << endl;
		n += 2;
		diamond_pattern(num);
		n -= 2;
		if (n!=num-2) {
			printer((num - n) / 2, ' ');
			printer(n, '*');
			cout << endl;
		}


	}




}
void printer(int times, char c) {
	if (times > 0) {
		cout << c;
		printer(times - 1, c);
	}
	else {
		return;
	}
}
