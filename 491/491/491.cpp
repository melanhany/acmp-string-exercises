#include <iostream>
#include <string>

using namespace std;

bool comparison(string a, string b)
{
	int n1 = a.length();
	int n2 = b.length();
	if (n1 != n2) {
		return false;
	}
	// loop for comparing every and each letter and checking if it is palindrome
	for (int i = 0; i < a.length(); i++)
		if (a[i] != b[i])
			return false;
	return true;
}

void reverse(string& rs)
{
	int n = rs.length();

	// swapping character starting from two corners 
	for (int i = 0; i < n / 2; i++)
		swap(rs[i], rs[n - i - 1]);
}

int main()
{
	string s, rs;
	int a;
	cin >> s;
	if (s.length() > 100000) {
		exit(0);
	}
	rs = s;
	reverse(rs);
	
	if (comparison(s, rs)) {
		for (int i = 0; i < rs.length(); i++) {
			if (rs[0] == rs[i]) {
				a = 1;
			}
			else {
				a = 0;
				break;
			}
		}
		if (a == 1) {
			cout << "NO SOLUTION";
		}
		else {
			s = s.substr(0, s.length() - 1);
			cout << s;
		}
	}
	else {
		cout << s;
	}
}
