#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    
    int N;
    
    int sum_x = 0, sum_y = 0, sum_z = 0;
    int x,y,z;
    
    cin >> N;
    
    for(int n=0; n<N; n++) {
        cin >> x >> y >> z;
        
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}