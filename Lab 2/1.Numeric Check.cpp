#include<bits/stdc++.h>


using namespace std;
bool checkDig(char c) {
	if (c >= '0' && c <= '9' or c == '-') return true;
	else return false;
}

bool isNumeric(string str) {
	bool point = false;
	for (char c : str) {
		if (c == '.') {
			if (point) return false;
			point = true;
		} else if (!checkDig(c)) {
			return false;
		}
	}
	return true;
}
int main() {
	string input;
	cout << "Enter a string: ";
	cin >> input;
	if (isNumeric(input)) {
		cout << "Numeric Constant" << endl;
	} else {
		cout << "Not Numeric" << endl;
	}
	return 0;
}