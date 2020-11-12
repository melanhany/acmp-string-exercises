#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

//boolean function that compares two strings for being anagram
bool isAnagram(string a, string b) {
	int n1, n2, i;
	n1 = a.length();
	n2 = b.length();

	if (n1 != n2) {
		return false;
	}

	//making all letters lower case and sorting to compare them more easily
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	//comparing every letter with each other
	for (i = 0; i < n1; i++) 
		if (a[i] != b[i])
			return false;
		
	return true;
}

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string word1, word2;
	fin >> word1 >> word2;
	
	//checking if input file has nothing in it and exit the program if it is
	if (word1.length() == 0 && word2.length() == 0) {
		exit(0);
	}
	//using anagram function
	if (isAnagram(word1, word2)) {
		fout << "Yes";
	}
	else {
		fout << "No";
	}
}

