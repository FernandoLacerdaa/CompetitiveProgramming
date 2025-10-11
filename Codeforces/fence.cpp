#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int n, k; cin>>n>>k;
    vector< int >v;
 
 
    for (int i=0; i<n;i++){
        int a; cin >>a;
        v.emplace_back(a);
 
    }
 
    int l=0;
    int sec =0;
    int soma =0;
    int m = 0x3f3f3f3f;
 
    for (int r=0; r<n;r++){
 
       soma +=v[r];
 
        if (r-l+1==k){
            if (soma < m){
                m = soma;
                sec = r-k+2;
            }
            soma -=v[l];
            l++;
        }
    }
    cout <<sec<<endl;
}