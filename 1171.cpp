#include <bits/stdc++.h>

using namespace std;

int main() {
	int e, n, a;
	int vet[e];
	int vetaux[2001];

	cin >> e;

	memset(vetaux, (int)0, sizeof(int) * 2001);

	for (int i = 0; i < e; i++) {
		cin >> n;
		vet[i] = n;
	}

	for (int i = 0; i < e; i++) {
		a = vet[i];
		vetaux[a] ++;
	}

	for (int j = 0; j < 2001; j++) {
		if (vetaux[j] != 0) {
			//cout << j << " aparece " << vetaux[j] << " vez(es)" << endl;
			printf("%d aparece %d vez(es)\n", j, vetaux[j]);
		}
	}
}