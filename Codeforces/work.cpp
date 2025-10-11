#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a;cin>>a;
 
    vector<int>v;
    vector<int>v2;
    for (int i=0;i<a;i++){
 
        int k;cin>>k;
        v.emplace_back(k);
    }
    int sum =0;
 
    int n = 0;
    int range = 0;
    for (int i=0;i<a;i++){
 
        if (v[i]<0){
            n++;
        }
 
        if (n == 2 && v[i+1]<0 && i+1!=a){
            sum++;
            range++;
            v2.emplace_back(range);
            range = 0;
            n=0;
        }else if (i+1==a){
            range++;
            sum++;
            v2.emplace_back(range);
        }
        else{
            range++;
        }
    }
 
 
    cout <<sum<<endl;
 
    for (auto u : v2){
        cout << u << " ";
    }
}