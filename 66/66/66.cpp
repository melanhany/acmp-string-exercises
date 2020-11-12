#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string s = "qwertyuiopasdfghjklzxcvbnm";
	string a;
	int i;
	int n = s.length();
	fin >> a;
	for (i = 0; i < n - 1; i++)
		if (a[0] == s[i])
			fout << s[i + 1];
	if (a[0] == s[n - 1])
		fout << s[n - n];
}


