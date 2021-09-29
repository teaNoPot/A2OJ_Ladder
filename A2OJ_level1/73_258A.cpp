#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    string n;
    cin >> n;
    int in=n.size();

    for(int i=0;i<n.size();++i) {
        if(n[i]=='0'){
            n.erase(n.begin()+i);
            break;
        }
    }
    if(n.size()==in)n.erase(n.begin());

    cout << n << endl;

    return 0;
}
