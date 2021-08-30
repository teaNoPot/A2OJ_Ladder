/**
 * B. Effective approach
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

pair<uint64_t, uint64_t> compare(int n, vector<uint64_t> w, int m, vector<uint64_t> q) {

    unordered_map<uint64_t, uint64_t> index;
    for(int i=0; i<n; i++) 
        index[w[i]] = i+1;

    uint64_t left = 0, right = 0;
    for(int i=0; i<m; i++) {
        left += index[q[i]];
        right += n - index[q[i]] + 1;
    }

    return make_pair(left, right);
}


int main() {

    // INPUT
    long n,m;
    cin >> n;
    vector<uint64_t> a(n);
    for(int i=0; i<n; i++) { // O(n)
        cin >> a[i];
    }

    cin >> m;
    vector<uint64_t> b(m);
    for(int i=0; i<m; i++) { // O(m) 
        cin >> b[i];
    }

    // Time complexity O(n+m), Space complexity O(n) 
    pair<uint64_t, uint64_t> res = compare(n,a,m,b);


    // OUTPUT
    cout << res.first << " " << res.second << endl;

    return 0;
}
