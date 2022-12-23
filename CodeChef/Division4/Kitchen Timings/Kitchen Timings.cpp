#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,X,Y;
    cin>>N;
    int Resp[N];
    for (int i = 0; i < N; ++i) {
        cin>>X>>Y;
        Resp[i]=Y-X;
    }
    for (int i = 0; i < N; ++i) {
        cout<<Resp[i]<<endl;
    }
}