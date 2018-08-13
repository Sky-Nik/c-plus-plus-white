#include <iostream>
#include <string>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	cout << ((B == 0) ? "Impossible" : to_string(A / B));
	return 0;
}