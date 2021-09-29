#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

void gen_primes(int n, vector<int> &a) {
    int M = n*14;
    vector<bool> A(M,true);
    for(int i=2;i*i<M;++i) {
        if(A[i]==true) {
            for(int j=i*i;j<M;j+=i) A[j] = false;
        }
    }

    for(int i=2;i<M;++i) {
        if(A[i]==true) a.push_back(i);
    }
}

int main()
{
    int n;
    vector<int> a;

    cin >> n;
    gen_primes(n,a);
    //OUTPUT
    for(int i=0;i<n;++i)
        cout << a[i] << " ";

    return 0;
}
