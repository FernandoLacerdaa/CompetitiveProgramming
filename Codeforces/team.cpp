#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int number; cin >>number;
    vector <int>v;
    for (int i=0;i<number;i++){
        int a; cin>> a;
        v.push_back(a);
    }
    sort (v.begin(), v.end());
    
 
    int ans = 0;
    int j = 0;
    for (int i=0;i<number;i++){//
        while(j < number && v[j] - v[i] <= 5){
            j++;
            ans = max(ans, j-i);
        }
 
    }
    cout << ans<<endl;
 
}