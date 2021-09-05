#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    
    int n,m;
    char a[110][110];
    
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a[j][i];
            if(a[j][i]=='.'){
                if((i+j)%2==0)a[j][i]='B';
                else a[j][i]='W';
            }
        }
    }
    
    for(int i=0; i<n;++i){
        for(int j=0;j<m;++j) {
            cout << a[j][i];
        }
        cout << endl;
    } 
}