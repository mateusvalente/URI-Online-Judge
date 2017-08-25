#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void init () {
   freopen ("in.txt", "r", stdin);

}

bool compara(vector<int> v){
    for (int i =1; i <= 6; i++) {
        if (v[i-1] != i) {
            return false;
        }

    }

    return true;
}

int main () {

    int n, valor;


#ifndef ONLINE_JUDGE
    init();
#endif // ONLINE_JUDGE

     cin >>n ;

     while (n--) {

            vector<int> v;
            vector<int> j(6);

            for (int i=0 ; i < 6; i++) {
                cin >> valor;
                v.pb(valor);
            }

            copy(v.begin(),v.end(),j.begin());
            sort(j.begin(),j.end());

        if (((v[0] + v[5]) == 7 && (v[1] + v[3]) == 7 && (v[2] + v[4]) == 7 ) &&  compara(j) ) {


            cout << "SIM" << endl;
        }
        else {


            cout << "NAO" <<endl;
        }
     }
}

