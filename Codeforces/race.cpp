#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int num; cin >> num;
    vector<pair<int,int>>vetor;
    
    for (int i=0;i < num+1; i++){
        int x, y; cin >> x >> y;
        vetor.push_back({x, y});
    }
    int counter = 0;
    
    for (int i=0;i < num-1; i++){
        if ((vetor[i].first>vetor[i+1].first) && (vetor[i].second>vetor[i+2].second)){
            counter ++;
        }else if ((vetor[i].first<vetor[i+1].first) && (vetor[i].second<vetor[i+2].second)){
            counter ++;
        }else if ((vetor[i].second<vetor[i+1].second) && (vetor[i].first>vetor[i+2].first)){
            counter++;
        }else if ((vetor[i].second>vetor[i+1].second) && (vetor[i].first<vetor[i+2].first)){
            counter++;
        }
 
    }
    cout << counter;
}