#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// boolean function for reassigning every number in characters and converting them into integer numbers
bool pepega(string s) {
	char chn0, chn1, chn2, chn3, chn4, chn5;
	int num0, num1, num2, num3, num4, num5;
	// converting every number into character
	chn0 = s.at(0);
	chn1 = s.at(1);
	chn2 = s.at(2);
	chn3 = s.at(3);
	chn4 = s.at(4);
	chn5 = s.at(5);
	// converting every character into integer
	// we subtract character by 48 because in the ASCII code, the numbers (digits) start from 48
	num0 = (int)chn0 - 48;
	num1 = (int)chn1 - 48;
	num2 = (int)chn2 - 48;
	num3 = (int)chn3 - 48;
	num4 = (int)chn4 - 48;
	num5 = (int)chn5 - 48;
	
	int number1 = num0 + num1 + num2;
	int number2 = num3 + num4 + num5;
	// comparing and returning false or true
	if (number1 != number2)
		return false;
	else
		return true;
}

void poggers(int j) 
{
	int prevn, nextn; // previous n and next n
	string strprevn, strnextn; // string previous n and string next n
	prevn = j - 1;
	nextn = j + 1;

	stringstream pr, ne; // converting previous n and next n into string
	pr << prevn;
	ne << nextn;
	pr >> strprevn;
	ne >> strnextn;
	// loop while that checks if string length is smaller than 6 that happened 
	// because of losing zeroes in the beginning of input number
	// if it is smaller than six, adds 0 in the beginning of the string until its length equals to 6
	while (strprevn.length() < 6 && strnextn.length() < 6) { 
		strprevn = "0" + strprevn;
		strnextn = "0" + strnextn;
	}
	// using pepega boolean function that proves if previous n or next n is a lucky ticket
	if (pepega(strprevn) || pepega(strnextn)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


}

int main()
{
	int k, i;
	cin >> k;
	int n[10];
	// loop for that takes input data
	for (i = 0; i < k; i++)
		cin >> n[i];
	// loop for that takes every input number with temporary variable and passes the function poggers
	for (i = 0; i < k; i++) {
		int temp;
		temp = n[i];
		poggers(temp);
	}
}
