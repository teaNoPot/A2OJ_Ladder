#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main()
{
    int n,a=0,b=0,w;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> w;
        if(w==200) a++;
        else b++;
    }
    int sum = 200*a+100*b;
    if(sum%200!=0) cout << "NO" << endl;
    else{
        int half = sum/2;
        bool ans = false;
        for(int i=0; i<=a; ++i) {
            if(200*i<=half && half-200*i<=100*b)
            {
                ans=true;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
