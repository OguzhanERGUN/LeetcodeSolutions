//Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//
//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
//
//
//
//Example 1:
//
//Input: s = "anagram", t = "nagaram"
//Output : true
//Example 2 :
//
//	Input : s = "rat", t = "car"
//	Output : false
//
//
//	Constraints :
//
//	1 <= s.length, t.length <= 5 * 104
//	s and t consist of lowercase English letters.

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
	unordered_map<char, int> hashMaps;
	unordered_map<char, int> hashMapt;

	bool isAnagram(string s, string t) {
		if (s.length() != t.length()) {
			return false;
		}



		for (int i = 0; i < s.length(); i++) {

			if (hashMaps.find(s[i]) != hashMaps.end()) {

				hashMaps[s[i]] += 1;
			}
			else
			{
				hashMaps.insert({ s[i],1 });

			}
			if (hashMapt.find(t[i]) != hashMapt.end()) {

				hashMapt[t[i]] += 1;

			}
			else
			{
				hashMapt.insert({ t[i],1 });

			}
		}

		if (hashMaps == hashMapt) {
			return true;
		}
		else {
			return false;
		}

	}
};