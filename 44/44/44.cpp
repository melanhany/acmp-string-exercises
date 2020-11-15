#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, r;
	int n = 0;
	int i;
	cin >> s;
	if (s.length() == 0) {
		exit(0);
	}
	for (i = 0; i < s.length(); i++) {
		r = s.substr(i, 5);
		if (r == ">>-->" || r == "<--<<") {
			n = n + 1;
		}
	
	}
	cout << n;
}
