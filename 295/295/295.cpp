#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

void func(string rawword, string key) {
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index1;
	int index2, n, n1, n2;
	int index3;
	// comparing coded string and key string that have the same length
	if (rawword.length() == key.length()) {
		for (int j = 0; j < 26; j++) {
			if (rawword[0] == alph[j]) {
				index1 = j;
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (key[0] == alph[j]) {
				index2 = j;
				break;
			}
		}
		//fout << index1 << " " << index2 << endl;
		if (index1 > index2) {
			n = index1 - index2;
			for (int i = 0; i < rawword.length(); i++) {
				for (int j = 0; j < 26; j++) {
					if (rawword[i] == alph[j]) {
						rawword[i] = alph[j - n];
						break;
					}
				}
			}
		}
		if (index1 < index2) {
			n = index2 - index1;
			for (int i = 0; i < rawword.length(); i++) {
				for (int j = 0; j < 26; j++) {
					if (rawword[i] == alph[j]) {
						rawword[i] = alph[j + n];
						break;
					}
				}
			}
		}
		int x = rawword.compare(key);
		if (x == 0) {
			fout << rawword;
		}
		else {
			fout << "IMPOSSIBLE";
		}
	}
	// comparing code string and key string that have different lengths
	else {
		for (int j = 0; j < 26; j++) {
			if (key[0] == alph[j]) {
				index1 = j;
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (rawword[0] == alph[j]) {
				index2 = j;
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (rawword[1] == alph[j]) {
				index3 = j;
				break;
			}
		}
		n1 = index1 - index2;
		n2 = index1 - index3;
		if (n1 > n2) {
			for (int i = 0; i < rawword.length(); i++) {
				for (int j = 0; j < 26; j++) {
					if (rawword[i] == alph[j]) {
						rawword[i] = alph[j + n2];
						break;
					}
				}
			}
		}
		if (n1 < n2) {
			for (int i = 0; i < rawword.length(); i++) {
				for (int j = 0; j < 26; j++) {
					if (rawword[i] == alph[j]) {
						rawword[i] = alph[j + n1];
						break;
					}
				}
			}
		}
	}
}

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	string s1, s2;
	fin >> s1 >> s2;
	if (s1.find(s2) != std::string::npos) {
		fout << s1 << '\n';
	}
	func(s1, s2);
}