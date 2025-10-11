#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, target; cin >>n>>target;
    map<int, int>mapa;
    vector<int>vetor; 
    for (int i=0;i<n;i++){
        int r; cin >>r;
        mapa[r]=i;
        vetor.push_back(r);
    }
    for (int i=0;i<n;i++){
        int y = target-vetor[i];
        if (mapa.find(y)!=mapa.end() && i!=mapa[y]){
            cout << i+1<< " " <<mapa[y]+1<< endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE"<< endl;
}