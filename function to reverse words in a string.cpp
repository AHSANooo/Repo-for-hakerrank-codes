// function to reverse words in a string
string Helper(string& word, int start, int end) {
	if(end-start<=1) {
		
		return word;

	}
	else {

		char temp = word[start];
		word[start] = word[end];
		word[end] = temp;
		return Helper(word, start + 1, end - 1);
	}
}

string reverseWord(string word, int start, int end) {

	return Helper(word, start, end);

}
