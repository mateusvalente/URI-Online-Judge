#include <bits/stdc++.h>

using namespace std;

bool primo (int d) {

	if (d == 1 || (d%2==0 && d!=2)) {
		return false;
	}

	for (int j = 2 ; j < sqrt(d); j++){
		if (d % j  == 0) {
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
			cout << "Prime" << endl;
		}
		else {
			cout << "Not Prime" << endl;
		}
	}
}