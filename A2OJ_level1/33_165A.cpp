/**
 * A. Supercentral Point
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

bool isSuperCentral(pair<int,int> v, vector<pair<int,int>> l) {

    bool bot = false, top = false, lt = false, rt = false;

    for(pair<int,int> p : l) {
        if(p.first == v.first) {
            if(p.second > v.second) { // upper neighbor
                top = true;
            } else if (p.second < v.second) {
                bot = true;
            }
        } else if(p.second == v.second) {
            if(p.first > v.first) { // right neighbor
                rt = true;
            } else if (p.first < v.first) {
                lt = true;
            }
        }
    }

    return bot && top && lt && rt;
}

// Time complexity , Space complexity
int main() {

    int N;
    cin >> N;

    vector<pair<int,int>> l;

    for(int i=0; i<N; i++) {
        pair<int,int> p;
        cin >> p.first >> p.second;
        l.push_back(p);
    }

    int num = 0;
    for(int i=0; i<N; i++) {
        if(isSuperCentral(l[i], l)) {
            num++;
        }
    }

    cout << num << endl;

    return 0;
}
