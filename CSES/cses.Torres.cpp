#include <bits/stdc++.h>

using namespace std;

int main(){

    set<char>v;
    v.insert('a');
    v.insert('e');

    set<char>c;
    c.insert('b');
    c.insert('c');
    c.insert('d');

    int k; cin >> k;
    bool bol= false; 

    int count = 0;
    int flag = 0;
    int c2 = 0;

    for (int i=0; i<k; i++){
        int n;cin>>n;
        string s;cin>>s;

        for (int t=0; t<s.size();t++){

            if (c.find(s[t]) != c.end()){

                if ((c.find(s[t+2]) != c.end()) && (c.find(s[t+3]) != c.end())){
                    bol = true;
                    cout<< s[t];
                    flag++;

                }
            }

            if ((bol == true) && (count <=2)){
                if (count ==2){
                    cout << s[t]<< '.';
                    bol = false;
                    count = 0;

                }else {
                    cout <<s[t];
                    count++;
                    
                }
            }
            else{
                if (c2<=2){
                    if (c2==2){
                        cout <<s[t]<<'.';
                        c2=0;
                    }else{
                        cout <<s[t];
                        c2++;
                    }
    
                }
            }
            flag = 0;
        }

    }
}