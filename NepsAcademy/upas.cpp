#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> selected;
    vector<bool> used(N + 1, false); 
    for (int i = N; i >= 1; --i) {  
        if (!used[i]) {
            bool can_select = true;

            for (int neighbor : graph[i]) {
                if (find(selected.begin(), selected.end(), neighbor) != selected.end()) {
                    can_select = false;
                    break;
                }
            }
            if (can_select) {
                selected.push_back(i);
                used[i] = true;
                for (int neighbor : graph[i]) {
                    used[neighbor] = true;
                }
            }
        }
    }

    sort(selected.begin(), selected.end());

    cout << selected.size() << '\n';
    for (int color : selected) {
        cout << color << ' ';
    }
    cout << '\n';

    return 0;
}