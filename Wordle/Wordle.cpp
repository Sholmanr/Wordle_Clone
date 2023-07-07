#include <iostream>
using namespace std; 

string wordGet() {
	string word = "";
	
	cout << "Enter the word!" << endl;
	cin >> word; 
	
	return word; 
}

string wordCheck(string check) {
	int wordLength, flag = 0;
	wordLength = check.length() + 1;
	char *char_arr = new char[wordLength + 1]; 
	strcpy_s(char_arr, wordLength, check.c_str());

	for (int i = 0; i < wordLength - 1; i++) {
		if (isalpha(char_arr[i])) {

		}
		else{
			cout << "Word contains a number or special character. Please input a different word." << endl;
			return "";
		}
	}

	delete[] char_arr;
	return check;
	
	 
}

string guess() {
	string guess = "";

	cout << "Enter your guess!" << endl;
	cin >> guess;

	return guess;
}

int main() {
	string secretWord = "", pguess = ""; 
	do {
		secretWord = wordGet();
		secretWord = wordCheck(secretWord);
	} while (secretWord == "");

	do {
		pguess = guess();
		secretWord = wordCheck(pguess);
	} while (pguess == "");

	 
}


