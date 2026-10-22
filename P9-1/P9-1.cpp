//	P9-1.cpp	-	Dylan King	-	10/22/2026
//	Description: This program counts the number of vowels in a string from the command line.

#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
	int vowel_count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
			vowel_count++;
		}
	}
	return vowel_count;
}

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Vowel count: " << countVowels(input) << endl;
	}
}