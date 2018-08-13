#include <algorithm>
#include <string>

using namespace std;

bool IsPalindrom(string s) {
	string t = s;
	reverse(begin(s), end(s));
	return t == s;
}