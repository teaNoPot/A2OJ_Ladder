/**
 * A. Dima and Friends
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

// Time complexity , Space complexity
int main() {

    int n;
    cin >> n;
    int sum = 0, finger;
    for (int i=0; i<n; i++) {
        cin >> finger;
        sum+=finger;
    }

    vector<int> solutions;
    for (int i=1; i<6; i++) {
        if((i+sum)%(n+1) != 1)
            solutions.push_back(i);
    }

    cout << solutions.size() << endl;

    return 0;
}
