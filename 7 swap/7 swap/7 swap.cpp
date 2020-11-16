#include <string>
#include <vector>
#include <iostream>
using namespace std;
/*bool comp(char s1, char s2) {
	if (s1 > s2)
}*/

int main()
{
	string a, b, c, temp, max;
	cin >> a >> b >> c;
	for (int i = 0; i < 3; i++) {
		if (a.length() > b.length()) {
			temp = a;
			a = b;
			b = temp;
		}
		else if (b.length() > c.length()) {
			temp = b;
			b = c;
			c = temp;
		}
		else if (a.length() > c.length()) {
			temp = a;
			a = c;
			c = temp;
		}
	}
	vector<char> ca(a.begin(), a.end());
	ca.push_back('\0');
	vector<char> cb(b.begin(), b.end());
	ca.push_back('\0');
	vector<char> cc(c.begin(), c.end());
	ca.push_back('\0');
	cout << a << " " << b << " " << c << endl;
	if (a.length() == b.length() && a.length() == c.length()) {
		// a & b
		for (int i = 0; i < a.length(); i++) {
			if (ca[i] > cb[i]) {
				max = a;
				break;
			}
			else if (ca[i] < cb[i]) {
				max = b;
				break;
			}
		}
		// max from (a,b) & c
		vector<char> cmax(max.begin(), max.end());
		cmax.push_back('\0');
		for (int i = 0; i < max.length(); i++) {
			if (cmax[i] > cc[i]) {
				max = max;
				break;
			}
			else if (cmax[i] < cc[i]) {
				max = c;
				break;
			}
		}
		if (a == b) {
			max = c;
		}
	}

	//if after bubble sort there are still remain two equal strings
	if (a.length() < b.length() && b.length() == c.length()) {
		for (int i = 0; i < b.length(); i++) {
			if (cb[i] > cc[i]) {
				max = b;
				break;
			}
			else if (cb[i] < cc[i]) {
				max = c;
				break;
			}
		}
		if (cb == cc) {
			max = c;
		}
	}
	if (c.length() > b.length()) {
		max = c;
	}
	cout << max;
}

