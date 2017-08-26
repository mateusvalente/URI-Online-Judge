#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

void init () {
    freopen ("in.txt", "r", stdin);

}


int main () {

    #ifndef ONLINE_JUDGE
            init();
    #endif // ONLINE_JUDGE


    int n, co=0, e;

    cin>>e;

    while (e--) {

    cin>>n;


    vector <int> notas(n);

    for (int c =0; c < n; c++) {
        cin >> notas[c];
    }

    vector <int> notas2(notas);

    sort(notas2.rbegin(), notas2.rend());

    co=0;

     for (int j =0; j < n; j++) {

       if ( notas[j] == notas2[j] ) {
            co++;
       }
    }


    cout << co <<endl;

    }
}