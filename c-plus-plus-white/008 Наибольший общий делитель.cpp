#include <iostream>

using namespace std;

int main() {
	int a, b, tmp;
	cin >> a >> b;
	while (a != 0) {
		tmp = a;
		a = b % a;
		b = tmp;
	}
	cout << b;
	return 0;
}