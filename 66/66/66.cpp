#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");

	//all letters of keyboard in correct order
	string s = "qwertyuiopasdfghjklzxcvbnm";
	string a;
	int i;
	int n = s.length();
	fin >> a;

	//loop for comparing every element of keyboard with input and output the letter next to the input letter
	for (i = 0; i < n - 1; i++)
		if (a[0] == s[i])
			fout << s[i + 1];
	/*isolated case where input is the last letter on keyboard and we need to get the first 
	letter instead of getting next letter which is nothing*/
	if (a[0] == s[n - 1])
		fout << s[n - n];
}


