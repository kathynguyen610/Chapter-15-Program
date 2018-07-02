//Kathy Nguyen
//Chapter 15 Program

#include <iostream>
#include <string>
using namespace std;
bool Palindrome(int first, int last, string word);

int main() {
	string word = "";
	int first = 0;
	cout << "Please enter a word: ";
	cin >> word;
	int last = word.length();
	if (Palindrome(first, last, word) == true) {
		cout << "The word " << word << " is a palindrome." << endl;
	}
	else {
		cout << "The word " << word << " is not a palindrome. " << endl;
	}
	system("pause");
}

//checks to see if the word is a palindrome and returns true or false
bool Palindrome(int first, int last, string word) {
	bool isPalin;
	//checking to see until the center of the word
	if (first > last) {
		isPalin = true;
	}
	//if there are still letters left, the function checks to see if the first and last letters are the same
	else {
		if (word[first] != word[last-1]) {
			isPalin = false;
		}
		else {
			Palindrome(first + 1, last - 1, word);
			isPalin = true;
		}
	}
	return isPalin;
}