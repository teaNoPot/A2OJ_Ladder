#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int next_number(vector<int> a) {
    int k = a[a.size()-1]+1;
    while(k<10000000) {
        bool is = true;
        for(int i=0;i<a.size();++i){
            if(k%a[i]==0) is = false;
        }
        if(is) break;
        else k++;
    }
    
    return k;
}

int main()
{
    int n;
    vector<int> a(1,2);
    cin >> n;
    while(a.size()<n){
        a.push_back(next_number(a));
    }
    
    for(int i=0;i<n;++i) 
        cout << a[i] << " ";
    
    return 0;
}
