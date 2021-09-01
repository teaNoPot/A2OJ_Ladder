/**
 * A. Petr and Book
 */

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

// Time complexity , Space complexity
int main() {

    int N;
    cin >> N;

    vector<int> a(7);
    
    for(int i=0; i<7; i++) {
        cin >> a[i];
    }
    int target = -1;
    while(N>0) {
        for (int i=0; i<7; i++) {
            N -= a[i];
            if(N <= 0) {
                target = i;
                break;
            }
        }
    }
    
    cout << target+1 << endl;

    return 0;
}
