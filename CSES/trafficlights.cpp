#include <iostream>
#include <set>
using namespace std;
 
int main() {
    set<int> lights;
    multiset<int> dist;
 
    int d, l; cin >> d >> l;
    lights.insert(0);
    lights.insert(d);
    dist.insert(d);
 
    while (l--) {
        int k; cin >> k;
        auto it = lights.insert(k).first; // O(log N)
        auto prev_it = it, next_it = it;
        --prev_it; ++next_it;            // O(1) for bidirectional iterators
 
        // Remove the old segment (only one occurrence)
        int old_len = *next_it - *prev_it;
        auto old_it = dist.find(old_len); // O(log N)
        dist.erase(old_it);              // O(1)
 
        // Add the two new segments
        dist.insert(k - *prev_it);      // O(log N)
        dist.insert(*next_it - k);      // O(log N)
 
        // Output the max segment
        cout << *dist.rbegin() << " ";  // O(1)
    }
    return 0;
}