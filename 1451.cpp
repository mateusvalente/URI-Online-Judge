#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void init () {
   freopen ("in.txt", "r", stdin);

}

int main () {

    #ifndef ONLINE_JUDGE
        init();
    #endif // ONLINE_JUDGE

    string line;

    while (cin >> line) {
       list<char> lista;
       list<char>::iterator it = lista.begin();
        for (int i=0; i < line.size(); i++) {
          if (line[i] == '['){
            it = lista.begin();
            continue;
          }
          if (line[i] == ']') {
            it = lista.end();
            continue;
          }
          lista.insert(it, line[i]);
        }
        
        while (!lista.empty()) {
        cout << lista.front();
        lista.pop_front();
        }
        
        cout << endl;
    }
}