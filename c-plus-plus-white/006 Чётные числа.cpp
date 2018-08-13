#include <iostream>
#include <string>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	for (int i = A; i <= B; ++i) cout << ((i % 2 == 0) ? to_string(i) : " ");

	return 0;
}