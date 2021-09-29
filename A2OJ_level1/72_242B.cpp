#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    int n,min=1000000001,max=0,il,ir;
    vector<pair<int,int>> a;
    cin >> n;
    
    for(int i=0;i<n;++i) {
        int l,r;
        cin >> l >> r;
        a.push_back({l,r});
        if(min>l||(min==l && r>a[il].second)) {min=l; il=i;}
        if(max<r||(max==r && l<a[ir].first)) {max=r; ir=i;}
    }
    
    if(max==a[il].second) cout << il+1 << endl;
    else if(min==a[ir].first) cout << ir+1 << endl;
    else cout << -1 << endl;
    
    return 0;
}
