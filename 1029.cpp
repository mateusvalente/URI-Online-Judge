#include <bits/stdc++.h>

using namespace std;
int c;

int fib(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	c += 2;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n, e, f;

	cin >> e;

	for (int i = 0; i < e; i++) {
		c = 0;
		cin >> n;
		f = fib(n);
		cout << "fib(" << n << ") = " << c << " calls = " << f << endl;
	}
}