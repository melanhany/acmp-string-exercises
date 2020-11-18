#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
	string s, ss, ss1, ss2, final_s, output;
	cin >> s;
	// checking if length of input is not zero or not bigger than 80
	if (s.length() == 0 || s.length() > 80) {
		exit(0);
	}
	// converting input into character
	vector<char> charn(s.begin(), s.end());
	charn.push_back('\0');
	int n = 0, nn;
	// ASCII values
	int n47 = 47; // ascii value of /
	int n48 = 48; // ascii value of 0
	int n49 = 49; // ascii value of 1
	int n58 = 58; // ascii value of :
	// loop for that checks every element of string
	for (int i = 0; i < s.length(); i++) {
		// here we check if i element and i + 1 element is in the range of numbers in ascii code 
		if (charn[i] > char(n48) && charn[i] < char(n58) && charn[i + 1] > char(n47) && charn[i + 1] < char(n58)) {
			n = (int)charn[i] - 48; // converting into integer
			ss1 = s[i];
			ss2 = s[i + 1];
			ss = ss1 + ss2;
			stringstream two_digit(ss); // converting into string
			two_digit >> n;
			// loop for that outputs elements to final_string after 2-digit number until n(2digit number)
			for (int j = 0; j < n; j++) {
				//cout << s[i + 2];
				output = s[i + 2];
				final_s = final_s + output;
			}
			i = i + 2;
		} // here we check if i element is in the range of 2 to 9
		else if (charn[i] > char(n49) && charn[i] < char(n58)) {
			n = (int)charn[i] - 48;
			for (int j = 0; j < n; j++) {
				//cout << s[i + 1];
				output = s[i + 1];
				final_s = final_s + output;
			}
			i = i + 1;
		} // condition if i equals to 0 or 1
		else if (charn[i] == char(n48) || charn[i] == char(n49)){
			cout << final_s;
			exit(0);
		}
		else { // output letter if there is no number before it
			output = s[i];
			final_s = final_s + output;
		}
		//if (s[i + 1] == numbers[i]) {
			//}
	}
	int f = 39;
	// loop that makes endline everytime it passes 40 elements limit
	for (int i = 0; i < final_s.length(); i++) {
		if (i > 38) {
			if (f % i == 0) {
				cout << final_s[i] << endl;
				f = f + 40;
			}
			else {
				cout << final_s[i];
			}
		}
		else
			cout << final_s[i];
	}
}