#include <vector>
#include <string>

using namespace std;


void MoveStrings(vector<string>& source, vector<string>& destination) {
	destination.insert(end(destination), begin(source), end(source));
	source.clear();
}