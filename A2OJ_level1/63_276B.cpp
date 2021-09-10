#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;
#define SIZE 26

int main()
{
    string a;
    cin >> a;

    int n = a.length(), k=0;

    int freq[SIZE];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[a[i] - 'a']++;

    for (int i = 0; i < SIZE; i++) {
        if(freq[i]%2==1)
            k++;
    }

    if(k==0)cout << "First" << endl;
    else if (k==1) cout << "First" << endl;
    else if (k%2==0) cout << "Second" << endl;
    else cout << "First" << endl;

    return 0;
}
