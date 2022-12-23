#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin>>N;
    int Especies[N];
    for (int i = 0; i < N; ++i) {
        cin>>Especies[i];
    }
    for (int i = 0; i < N; ++i) {
        if (Especies[i] < 4){
            cout<<"MILD"<<endl;
        }else if(Especies[i] >= 4 and Especies[i] < 7){
            cout<<"MEDIUM"<<endl;
        }else if (Especies[i] > 7){
            cout<<"HOT"<<endl;
        }
    }
    return 0;
}