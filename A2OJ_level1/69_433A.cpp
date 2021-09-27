#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main()
{
    int sum1=0, sum2=0;
    int n,w;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> w;
        if(sum1<sum2) sum1+=w;
        else sum2 += w;
    }

    if(sum1==sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
