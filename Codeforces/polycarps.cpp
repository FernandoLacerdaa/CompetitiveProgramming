#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int q, d; cin>>q>>d;
    vector<pair<int,int>>vetor;

    for (int i=0;i<q;i++){
        int k;cin>>k;
        vetor.emplace_back(k,i);
    }
    sort(vetor.begin(), vetor.end());
 
    vector<pair<int,int>>maior;
    int top = 0;
    for(int i=1;i<=d;i++){
        maior.emplace_back(vetor[vetor.size()-i]);
        top+=vetor[vetor.size()-i].first;
    }
    
    vector<int>v2;
    for (int i=0;i<d;i++){
        v2.emplace_back(maior[i].second);
    }
    sort(v2.begin(), v2.end());
 
    cout << top<< endl;
    if(d==1){
        cout << q<< " ";
        return 0;
    }
    for (int i=0;i<d;i++){
        if (i==0) cout <<v2[0]+1<<" ";
        if (i+1==d&&i!=0){
            cout <<(q-v2[i]) +  v2[i]-v2[i-1]-1<< " ";
        }
        if (i+1!=d&& i!=0){
            cout << v2[i]-v2[i-1]<<" ";
        }
    }
 
} 