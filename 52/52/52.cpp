#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// function reASSignment 
// for reassigning every number in characters and converting them into integer numbers 
void reASSignment(string s)
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
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
	if (number1 != number2) 
		fout << "NO";
	
	else
		fout << "YES";
}

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string s;
	fin >> s;
	// check if there are no empty spaces in the input
	if (s.length() == 0)
		exit(0);

	reASSignment(s);

}

