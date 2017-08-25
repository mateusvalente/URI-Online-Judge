#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main ()
{
    string entrada, op , entrada2, saida;
    int calc;

    cin >> entrada >> op >> entrada2;

    replace(entrada.begin(),entrada.end(),'7','0');
    replace(entrada2.begin(),entrada2.end(),'7', '0');

    int a = atoi(entrada.c_str());
    int b = atoi(entrada2.c_str());


    if (op[0] == '+') {
        calc = a + b;
    }
    else {
        calc = a * b;
    }

        stringstream ss;
        ss << calc;
        ss >> saida;

    replace(saida.begin(),saida.end(),'7', '0');

    cout << atoi(saida.c_str()) << endl;
}

