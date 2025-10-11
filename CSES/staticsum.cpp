#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,q; cin >> n >>q;
    long long int a = 0;
    vector <long long int>vetor;
    vetor.push_back(0);
    
    for (long long int i=1;i<=n;i++){
        long long int k; cin >> k;
        a +=k;
        vetor.push_back(a);
    }
    for (long long int i=0; i<q; i++){
        // 5                 6
        long long int m, b; cin >> m >>b;
        long long int res = vetor[b] - vetor[m-1];
        cout << res<< endl;
    }
}