#include <iostream>
#include <cmath>

using namespace std;

typedef long double ldouble;

int main() {
	ldouble A, B, C;
	cin >> A >> B >> C;
	if (A != 0) {
		ldouble D = B * B - 4 * A * C;
		if (D > 0) cout << (-B - sqrtl(D)) / (2 * A) << " " << (-B + sqrtl(D)) / (2 * A);
		if (D == 0) cout << -B / (2 * A);
	}
	else if (B != 0) cout << -C / B;

	return 0;
}