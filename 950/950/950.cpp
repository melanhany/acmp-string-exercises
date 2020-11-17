#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string alph = "abcdefghijklmnopqrstuvwxyz";
	string s;
	int j = 0;
	cin >> s;
	// converting string into character
	vector<char> cs(s.begin(), s.end());
	cs.push_back('\0');
	// loop for that checks every element of character and 
	// outputs alphabet letters with the j value
	for (int i = 0; i < s.length(); i++) {
		if (cs[i] == 1 + '0')
			cout << alph[0];
		if (cs[i] == 0 + '0') {
			while (j < 26) {
				j++;
				if (cs[i + 1] == 1 + '0') {
					cout << alph[j];
					i = i + 1;
					j = 0;
					break;
				}
				i++;
			}
		}
	}
}
