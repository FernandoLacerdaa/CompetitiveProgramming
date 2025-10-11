#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
 
    vector <int>pessoasv;
    set<pair<int, int >>sete;
 
    int ticktess, pessoas; cin >> ticktess >> pessoas;
    
    for(int i=0; i<ticktess; i++){
        int valor; cin >> valor;
        sete.insert({valor, i});
 
    }
 
    for(int i=0; i < pessoas; i++){
        int max; cin >> max;
        pessoasv.push_back(max);
    }
 
 
    for (int i=0; i< pessoas ;i++){                                        
        auto match = sete.lower_bound({pessoasv[i]+1, 0});
        if (match == sete.begin()){
            cout << -1 << endl;
        }
        else{
            match --;
            cout << (*match).first << endl;
            sete.erase(match);
        }
    }
 
}