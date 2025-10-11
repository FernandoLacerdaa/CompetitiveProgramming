#include <bits/stdc++.h>

using namespace std;
int main (){
    int k; cin >> k;
    vector<pair<int, int>>vetor;
    for (int i=0; i<k;i++){
        int a, b ; cin >>a>>b;
        vetor.emplace_back(b, a);
    }
    
    sort(vetor.begin(),vetor.end());
    int temp =1;
    int ultimo = vetor[0].first;
    for (int i=1;i<k;i++){
        if (vetor[i].second>=ultimo){
            temp++;
            ultimo=vetor[i].first;
        }
    }
    cout << temp;
}