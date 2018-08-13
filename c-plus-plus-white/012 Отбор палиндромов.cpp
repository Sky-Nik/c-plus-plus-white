#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool isPalindrom(string s) {
	string t = s;
	reverse(begin(s), end(s));
	return t == s;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> ans;
	for (string s : words) if (isPalindrom(s) && s.length() >= minLength) ans.push_back(s);
	return ans;
}