#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void init () {
   freopen ("in.txt", "r", stdin);

}

int main () {

    int n, x , y, busca;

#ifndef ONLINE_JUDGE
    init();
#endif // ONLINE_JUDGE

    while( cin >> n){

        vector<int> v;

        while (n--){
            cin >> x >> y;
            for(int i=x; i <= y; i++) {
                v.pb(i);
            }
        }

        sort (v.begin(),v.end());

        cin >> busca;

        vector<int>::iterator itb;
        itb = lower_bound(v.begin(),v.end(),busca);

        vector<int>::iterator ite;
        ite = upper_bound(v.begin(),v.end(),busca);

        /* for (int i = 0 ; i < v.size() ; i++) {
            cout << v[i] ;
        }*/

        if(*itb == busca){
            cout << busca << " found from " << itb-v.begin() << " to " << (ite-v.begin()) -1 << endl;
        }
        else {
             cout << busca << " not found" << endl;

        }

    }
}




