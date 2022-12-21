#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, numero1, numero2;
    cin >> n;
    int resp[n];
    char signo;
    int a, b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> signo >> b;
        resp[i]= a+b;
    }
    for (int i = 0; i < n; ++i) {
        cout << resp[i] << "\n";
    }
}