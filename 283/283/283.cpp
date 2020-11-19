#include <iostream>
#include <string>
#include <vector>
using namespace std;
void check(string rune) {
	// converting string into char for easier comparison
	vector<char> charrune(rune.begin(), rune.end());
	charrune.push_back('\0');
	// loop for that goes over every element of string
	for (int i = 0; i < rune.length(); i++) {
		// if first element and element after three little letters is not capital letter
		if (charrune[i] <= char(64) || charrune[i] >= char(91)) {
			cout << "No";
			exit(0);
		}
		// checking if after capital letter there is at least 1 to 3 non capital letters
		if (charrune[i + 1] > char(96) && charrune[i + 1] < char(123)) {
			for (int j = 1; j < 4; j++) {
				if (charrune[i + 1] > char(96) && charrune[i + 1] < 123)
				{
					i++;
				}
				else
				{
					break;
				}
			}
		}
		else {
			cout << "No";
			exit(0);
		}
		
	}
	cout << "Yes";
}

int main()
{
	string s;
	cin >> s;
	if (s.length() > 100000) {
		exit(0);
	}
	// function check
	check(s);
}