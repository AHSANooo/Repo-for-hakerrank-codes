//function to find the character count of a character array
int getCharCount(const char* ptr, char c) {

	static int count = 0;
	int temp = count;

	if (* ptr == '\0') {

		count = 0;
		return temp;

	}
	else {
		if (*ptr == c) {
			count++;
			
		}
		ptr++;
		getCharCount(ptr, c);
	}

}
