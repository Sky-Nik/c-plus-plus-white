#include <vector>

using namespace std;

class Incognizable {
public:
	Incognizable() {
		data = {};
	}
	Incognizable(initializer_list<int> v) {
		data = v;
	}
private:
	vector<int> data;
};