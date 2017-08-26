#include <bits/stdc++.h>
#include "iostream"

using namespace std;

bool primo(int d) {

	if (d == 1) {
		return false;
	}

	for (int j = 2; j < d; j++) {
		if (d % j == 0) {
			return false;
		}
	}
	return true;
}


int main() {

	int e = 0;
	int p = 0;

	cin >> e;

	for (int i = 0; i < e; i++) {
		cin >> p;

		if (primo(p) == true) {
			cout << p << " eh primo" << endl;
		}
		else if (primo(p) == false) {
			cout << p << " nao eh primo" << endl;
		}
	}
}