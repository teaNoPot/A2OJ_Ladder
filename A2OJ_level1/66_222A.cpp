#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    int n,k,val,f,c,res=0;
    vector<int> a;

    // Input
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        cin >> val;
        a.push_back(val);
    }

    c = count(a.begin(), a.end(), a[k-1]);
    if(c==n) cout << 0 << endl;
    else if(k==1) cout << -1 << endl;
    else if(k==n) cout << n-1 << endl;
    else
    {
        // Algo
        for(int i=0; i<n; ++i)
        {
            f = a[k-1];
            c = count(a.begin(), a.end(), f);
            a.erase(a.begin());
            a.push_back(f);
            if(c == n) break;
            res++;
        }

        // Output
        cout << (res>=n? -1:res) << endl;
    }

    return 0;
}
