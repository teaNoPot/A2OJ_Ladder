/**
 * B. Jeff and Periods
 */
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{

    int n;
    map<int,vector<int>> mp;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }

    // pos
    int pix[10000];

    for(auto [k,v]: mp) {
        int px=0;
        if(v.size()>1){
            px = v[1] - v[0];
            bool isv = true;
            for(int i=1; i<v.size()-1; ++i)
            {
                if((v[i+1]-v[i]) != px)
                {
                    isv = false;
                    mp.erase(k);
                    break;
                }
            }
            if (isv)
            {
                pix[k]=px;
            }
        }
    }

    cout << mp.size() << endl;
    for(auto [k,v]:mp)
    {
        cout << k << " " << pix[k] << endl;
    }

    return 0;
}
