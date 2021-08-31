/**
 * A. Jzzhu and Children
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

// Time complexity , Space complexity
int main() {

    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    queue<pair<int,int>> q;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        q.push(make_pair(i,a[i]));
    }

    int last = -1;
    while(!q.empty()) {
        if(q.size()==1){
            last = q.front().first;
        }

        int diff = q.front().second - m;
        if(diff > 0) {
            q.push(make_pair(q.front().first, diff));
        }
        q.pop();
    }

    cout << last+1 << endl;

    return 0;
}
