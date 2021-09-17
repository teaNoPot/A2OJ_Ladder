#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    int g[5][5];
    int d[]={0,1,2,3,4};
    int max = 0;
    for(int i=0; i<5; ++i) for(int j=0; j<5; ++j) cin>>g[i][j];

    do
    {
        int f1 = g[d[0]][d[1]] + g[d[1]][d[0]];
        int f2 = g[d[1]][d[2]] + g[d[2]][d[1]];
        int f3 = g[d[3]][d[4]] + g[d[4]][d[3]];
        int f4 = g[d[2]][d[3]] + g[d[3]][d[2]];
        int curr_max = f1+f2+2*(f3+f4);
        if(curr_max > max) max = curr_max;
    } while (next_permutation(d,d+5));

    cout << max << endl;

    return 0;
}
