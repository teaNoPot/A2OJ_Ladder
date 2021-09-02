#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

// Time complexity , Space complexity
int main() {

    vector<int> e(3);
    cin >> e[0] >> e[1] >> e[2];
    
    int a,b,c;
    
    a = round(sqrt((e[0]*e[2])/e[1]));
    b = round(sqrt((e[0]*e[1])/e[2]));
    c = round(sqrt((e[1]*e[2])/e[0]));
    
    cout << (a+b+c)*4 << endl;
    
    return 0;
}
