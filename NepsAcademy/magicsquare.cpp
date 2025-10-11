#include <iostream>
#include <vector>
using namespace std;

int main(){
    int matrix[3][3]={0};
    vector<int> vetor;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int x;
            cin >>x;
            matrix [i][j]=x;
        }
    }
    
    int soma4 = 0;
    int soma3 = 0;
    for (int i = 0; i < 3; ++i){
        int soma2=0;
        int soma = 0;
        for (int j = 0; j < 3; ++j){
            soma +=matrix[i][j];
            soma2+=matrix[j][i];
            if (j==i){
                soma3+=matrix[j][i];
            }
            if (i+j==2){
                soma4+=matrix[i][j];
            }
        }
        vetor.push_back(soma);
        vetor.push_back(soma2);
        soma = 0;
        soma2 = 0;
    }
    vetor.push_back(soma3);
    vetor.push_back(soma4);

    for (int i =0;i<vetor.size()-1;i++){
        if (vetor[i]!=vetor[i+1]){
            cout<< "NAO"<<endl;
            return 0;
        }

    }
    cout <<"SIM";

}