#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cheems(string s) {
	vector<char> num(s.begin(), s.end());
	num.push_back('\0');
	string letters = "ABCEHKMOPTXY"; 
	string numbers = "0123456789";
	int p1, p2, p3, p4, p5;
	int ascii1 = 33;
	int ascii2 = 127;
	// condition that checks if length of our string is more or less than 6
	if (s.length() == 6) {
		p4 = 1;
	}
	else {
		p4 = 0;
		return false;
	}
	// loop that checks if first element of gov number is valid
	for (int i = 0; i < letters.length(); i++) {
		if (s[0] == letters[i]) {
			p1 = 1;
			break;
		}
		else
			p1 = 0;
	}
	// loop that checks if numbers in the gov number are valid and not letters
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j < numbers.length(); j++) {
			if (s[i] == numbers[j]) {
				p2 = 1;
				break;
			}
			else {
				p2 = 0;
			}
		}
	}
	// loop that checks last two elements in gov number and their validation
	for (int i = 4; i < 6; i++) {
		for (int j = 0; j < letters.length(); j++) {
			if (s[i] == letters[j]) {
				p3 = 1;
				break;
			}
			else
				p3 = 0;
		}
	}
	// loop that checks every element if there are any symbol smaller than 33 and bigger than 127 on ASCII code
	for (int i = 0; i < s.length(); i++) {
		if (num[i] >= char(ascii1) && num[i] <= char(ascii2)) {
			p5 = 1;
		}
		else {
			p5 = 0;
			break;
		}
	}
	if (p1 == 1 && p2 == 1 && p3 == 1 && p4 == 1 && p5 == 1)
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;
	if (n > 50 || n < 0)
		exit(0);
	string *gosnum = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> gosnum[i];
		if (gosnum[i].length() > 300) {
			exit(0);
		}
	}
	for (int i = 0; i < n; i++) {
		if (cheems(gosnum[i]) == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
