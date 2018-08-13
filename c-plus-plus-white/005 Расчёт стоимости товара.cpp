#include <iostream>

using namespace std;

typedef long double ldouble;

int main() {
	ldouble N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;
	cout << ((N > B) ? N * (100 - Y) / 100. : ((N > A) ? N * (100 - X) / 100. : N));
	return 0;
}