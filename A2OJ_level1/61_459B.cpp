/**
 * B. Pashmak and Flowers 
 */
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int fact(int n){
    return std::tgamma(n + 1);  
}    

int main() 
{
    long long n, d;
    cin >> n;
    
    long long v[n];
    long long a = 1, b = 1;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v, v + n);
    d = v[n - 1] - v[0];

    if(v[0] == v[n - 1])
        cout << d << " " << (n - 1) * n / 2 << endl;
    else
    {
        for(int j = 1; j < n - 1; j++)
        {
            if(v[j] == v[n - 1])
                a++;
            else if(v[j] == v[0])
                b++;
        }
        cout << d << " " << a * b << endl;
    }

    return 0;
}