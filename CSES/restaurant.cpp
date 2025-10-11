#include <bits/stdc++.h>
using namespace std;
int  main(){
    int k; cin >> k;
    vector<pair<int, int>>vetor;
    for (int i=0; i<k;i++){
        int a, b; cin >>a>>b;
        vetor.emplace_back(a, 1);
        vetor.emplace_back(b, 0);
    }
    sort(vetor.begin(), vetor.end());
    int maior =0;
    int big =0;
    for(int i=0; i<2*k;i++){
        if (vetor[i].second==1){
            maior ++;
        }
        else{
            maior --;
        }
        big = max(maior, big);
    }
    cout << big;
}