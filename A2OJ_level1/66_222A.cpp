#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main()
{
    int n,k,val,res=0;
    vector<int> a;
    bool flag = false;
    
    // Input
    cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        cin >> val;
        a.push_back(val);
    }
    
    // O(n)
    for(int i=0; i<n-1; ++i) if(a[i]!=a[n-1]) res=i+1;
    if(k==1 && res>0) cout << -1 << endl;
    else if(res>=k) cout << -1 << endl;
    else cout << res << endl;
    
    
    return 0;
}
