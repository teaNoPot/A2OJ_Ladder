#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    int n,t;
    cin >> n;
    
    while(n--) {
        cin >> t;
        vector<int> a(t);
        for (int i=0; i<t; ++i) {
            cin >> a[i];
        }
        // number of exchanges == number of inversions in A 
        bool sorted = true;
        for (int i=0; i<t-1; ++i) {
            if(a[i] <= a[i+1]) {
                sorted = false;
                break;
            }
        }
        cout << (sorted? "NO": "YES") << "\n";
    }
    
    return 0;
}
