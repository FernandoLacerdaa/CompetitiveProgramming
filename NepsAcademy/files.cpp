#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, b; cin >> n >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;
    int pastas = 0;

    while (r >= l) {
        if (v[l] + v[r] <= b) {
            l++;
        }
        // whether paired or not, r is used
        pastas++;
        r--;
    }

    cout << pastas << endl;
}
