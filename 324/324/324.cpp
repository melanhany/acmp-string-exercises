#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// function for comparing input number and its reversed version
bool comparison(string a, string b) 
{
	int n1 = a.length();
	int n2 = b.length();
	if (n1 != n2) {
		return false;
	}
	// loop for comparing every and each number and checking if it is palindrome
	for (int i = 0; i < a.length(); i++)
		if (a[i] != b[i])
			return false;
	return true;
}
// function for reversing input number
void reverse(string& rs)
{
	int n = rs.length();

	// swapping character starting from two corners 
	for (int i = 0; i < n / 2; i++)
		swap(rs[i], rs[n - i - 1]);
}

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string s, rs;
	fin >> s;
	rs = s;
	reverse(rs);
	// checking if there is empty space in the input
	if (s.length() == 0 && rs.length() == 0) {
		exit(0);
	}
	// using function of comparing input number and reversed input number
	if (comparison(s, rs))
		fout << "YES";
	else
		fout << "NO";
}

