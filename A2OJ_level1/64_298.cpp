/**
 * B. Sail
 */
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;
#define SIZE 26

int main()
{
    int t;
    int sx,sy,ex,ey;
    string d="";
    cin >> t >> sx >> sy >> ex >> ey >> d;

    int et=0, x=sx, y=sy;
    for(int i=0; i<t; ++i)
    {
        // Corner cases
        if((d[i]=='S'||d[i]=='N')&&y==ey) continue;
        if((d[i]=='E'||d[i]=='W')&&x==ex) continue;
        // Has to be same direction to move
        if(d[i]=='E' && sx<ex) x++;
        if(d[i]=='W' && sx>ex) x--;
        if(d[i]=='S' && sy>ey) y--;
        if(d[i]=='N' && sy<ey) y++;
        if(x==ex && y==ey)
        {
            et=i+1;
            break;
        }
    }

    if(x==ex && y==ey) cout << et << endl;
    else cout << -1 << endl;

    return 0;
}
