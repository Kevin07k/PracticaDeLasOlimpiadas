#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int N;
    cin >> N;
    int Tam, MinFres;
    int Precios = 0;
    int Gasto[N];
    int Temp;
    for (int i = 0; i < N; ++i) {
        cin >> Tam >> MinFres;
        int Datos[2][Tam];
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < Tam; ++k) {
                cin >> Datos[j][k];
            }
        }
        for (int j = 0; j < Tam; ++j) {
            Temp = Datos[0][j];
            if (MinFres <= Temp) {
                Precios += Datos[1][j];
            }
        }
        Gasto[i] = Precios;
        Precios = 0;
    }
    for (int i = 0; i < N; ++i) {
        cout << Gasto[i] << endl;
    }
    return 0;
}