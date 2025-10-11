#include <iostream>
#include <map>
using namespace std;


int main(){
    map<int,int>col;
    map<int,int>row;
    int k; cin>> k;
    int matriz [k][k];
    for (int i=0;i <k;i++){
        int temp=0;
        for (int j=0;j <k;j++){
            int n; cin >> n;
            matriz[i][j]=n;
            col[j]+=n;
            temp +=n;
        }
        row[i] = temp;

    }
    int maior =0;
    for (int i =0; i<k;i++){
        for (int j=0; j<k;j++){
            int value = row[i]+col[j]-2*matriz[i][j];
            if (value>maior){
                maior = value;
            }
        }

    }
    cout << maior;
}