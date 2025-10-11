#include <bits/stdc++.h>

using namespace std;

vector  <int>v;
vector  <int>v2;
int main(){
	int x; cin>>x;

	for (int i=0; i<x;i++){
		int a; cin>>a;
		v.emplace_back(a);
		
	}
	if (v[0]==1){
		
	}

	int l =0;
	int sum =v[0];

	int flag = 0;
	for (int r=1; r<x;r++){

		if(r-l==2){
			sum += v[r];
			cout << sum<< endl;
			sum -= v[l];
			l++;
		}else{
			sum +=v[r] && flag<=2;
			flag++;
			cout <<sum<<endl;
		}
		if (flag ==2){
			sum =0;
		}
		
	}

	if (v[v.size()-1]==v[v.size()-2] && v[v.size()-1] ==1){
		cout <<2 <<endl;
	} else if (v[v.size()-1]==v[v.size()-2] && v[v.size()-1] ==0){
		cout << 0<<endl;

	}else{
		cout <<1 << endl;
	}
}
