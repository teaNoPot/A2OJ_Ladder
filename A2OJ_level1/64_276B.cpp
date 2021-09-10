#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    string a;
    cin >> a;

    int n = a.length(), t = 0;
    bool pal;

    while(t < 1001)
    {
        int d = -1;
        int n = a.length();
        pal = true;
        for(int i=0; i<n/2; ++i)
        {
            if(a[i]!=a[n-i-1])
            {
                pal = false;
                a.erase(a.begin()+i);
                t++;
                break;
            }
        }

        if(pal == true) break;
    }

    if(t%2==0) cout << "First" << endl;
    if(t%2!=0) cout << "Second" << endl;

    return 0;
}
