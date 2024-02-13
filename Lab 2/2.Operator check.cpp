#include<bits/stdc++.h>

using namespace std;

bool OperatorChek(char c) {
	switch (c) {
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case '=':
		return true;
	default:
		return false;
	}
}

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	int cnt = 0;

	for (int i = 0; i < str.length(); i++) {
		if (OperatorChek(str[i])) {
			cnt++;
			cout << "Operator " << cnt << " :" << str[i] << endl;
		}
	}

	return 0;
}