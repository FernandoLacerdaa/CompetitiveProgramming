#include <iostream>
using namespace std;

int main(){
    int sub;
    cin >> sub;
    int matriz[100][100] = {0};

    int Xi,Xf,Yi,Yf;
    for (int i =0; i<sub; i++){
        cin >> Xi >> Xf >> Yi >> Yf;

        for (int k=Xi; k<Xf;k++){
            for (int g=Yi; g<Yf;g++){
                matriz[k][g] = 1;
            }
        }
    }

    int ount= 0;
    for (int i=0; i<100;i++){
        for (int g=0; g<100;g++){
            if( matriz[i][g] == 1){
                ount ++;
            }
        }
    }
    cout << ount;

    return 0;
}

