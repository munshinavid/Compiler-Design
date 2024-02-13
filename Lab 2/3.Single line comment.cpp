#include<bits/stdc++.h>


using namespace std;

bool hasComment(string str) {
	for (int i = 0; i < str.length() - 1; i++) {
		if ((str[i] == '/' && str[i + 1] == '/') ||
		        (str[i] == '/' && str[i + 1] == '*') ||
		        (str[i] == '*' && str[i + 1] == '/')) {
			return true;
		}
	}
	return false;
}

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);

	if (hasComment(str)) {
		cout << "The string contains a comment line.\n";
	} else {
		cout << "The string does not contain a comment line.\n";
	}

	return 0;
}