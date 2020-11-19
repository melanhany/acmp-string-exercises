#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// boolean function that compares two strings for being anagram
bool Anagram(string word1, string word2) {
	int n1, n2, i;
	n1 = word1.length();
	n2 = word2.length();
	// if length of one string is not equal to another they are just not anagrams
	if (n1 != n2) {
		return false;
	}
	// sorting strings to compare them more easily
	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());
	// loop for that checks every element of both strings with each other
	for (i = 0; i < n1; i++)
		if (word1[i] != word2[i])
			return false;

	return true;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.length() == 0 && s2.length() == 0) {
		exit(0);
	}
	//using anagram function
	if (Anagram(s1, s2)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}