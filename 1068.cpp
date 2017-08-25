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

    string palavra;

    while (cin>>palavra) {

        stack<char> pilha;
        bool valida = true;


        for (int i=0; i < palavra.size(); i++){

           if (palavra[i] == '(' ) {
                pilha.push(palavra[i]);
           }
           else if (palavra[i] == ')') {
                 if (pilha.empty()){
                   valida = false;
                 }
                 else {
                    pilha.pop();
                 }
           }
       }

       if (!pilha.empty() || valida == false) {
            cout << "incorrect" << endl;
       }
       else {
            cout << "correct" << endl;
       }

    }

}



