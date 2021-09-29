#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main()
{
    string a,b;
    int num=0;
    bool diff=false;
    cin >> a >> b;
    
    if(a.size()!=b.size()) cout << "NO" << endl;
    else {
        char t1='\0',t2='\0';
        for(int i=0; i<a.size(); ++i) {
            if(a[i]!=b[i]) 
            {
                num++;
                if(t1!='\0'&&t2!='\0'){
                    if(t1!=b[i]||t2!=a[i])diff=true;
                }
                if(t1=='\0')t1=a[i];
                if(t2=='\0')t2=b[i];
            }
        }
        if(num==2 && !diff) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
