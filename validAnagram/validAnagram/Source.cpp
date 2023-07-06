// Leetcode Valid Anagram Interview Question
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		int sTotal = 0;
		int tTotal = 0;
		double sTotalModulo = 0;
		double tTotalModulo = 0;
		if (s.length() == t.length()) {
			for (int i = 0; i < s.length(); i++) {
			sTotal += s[i];
			tTotal += t[i];
		}
			for (int i = 0; i < s.length(); i++) {
				sTotalModulo += sqrt(s[i]);
				tTotalModulo += sqrt(t[i]);
			}
 			if (sTotalModulo + sTotal == tTotalModulo + tTotal) {
				return true;
			}
		}
		return false;
	}
};


int main() {

	Solution* f = new Solution();
	string t;
	string s;
	bool result;

	cout << "Enter string 1: ";
	cin >> s;
	cout << endl << "Enter string 2: ";
	cin >> t;
	result = f->isAnagram(s, t);

	if (result==true){
		cout << "true";
	}
	else {
		cout << "false";
	}
}