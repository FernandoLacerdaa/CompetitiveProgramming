#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;cin>>s;

    unordered_map<int,int>m;

    for (int i=0; i<s.size();i++){
        m[s[i]]++;
    }

    if(s.size()%2==0){

        for (auto it=m.begin(); it!=m.end();it++){
            if( (*it).second % 2 !=0){
                cout << "IMPOSSIBLE"<<endl;
                return 0;
            }

        }
        for (auto it=m.begin(); it!=m.end();it++){
            
            while ((*it).second !=0){
                cout << (*it).first;
                (*it).second--;
            }
        }



    }
}