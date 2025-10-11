#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int>vetor = {1,5,10,25,50,100};
    int k; cin >>k;
    sort(vetor.begin(), vetor.end());
    //150
    int temp=0;
    for (int i = 1;i<=vetor.size();i++){       
        while ((k/vetor[vetor.size()-i])!=0){
            temp++;
            k -=vetor[vetor.size()-i];
        }
    }
    cout << temp;
}