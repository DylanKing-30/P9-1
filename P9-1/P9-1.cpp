//	P9-1.cpp	-	Dylan King	-	10/22/2026
//	Description: This program counts the number of vowels in a string from the command line.

#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str) {
	return str.length();
}

int main() {
	cout << "Hello, world! = " << countCharacter("Hello, world!") << endl;
	cout << "a b c = " << countCharacter("a b c") << endl;
	cout << "' ' = " << countCharacter(" ") << endl;
	cout << "a z, a = " << countCharacter("a z, a") << endl;
}