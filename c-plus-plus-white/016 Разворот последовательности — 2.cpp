#include <algorithm>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v) {
	auto ans = v;
	reverse(begin(ans), end(ans));
	return ans;
}