#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int swap_one(vector<vector<int>> mat, int N) {
    int num_swaps = 0;

    int t = 2;
    int pos_i = 0;
    int pos_j = 0;

    // Note : find the position without looping through all ?
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }

    while (pos_i != t || pos_j != t) {
        if(pos_i > t)
            pos_i -= 1;
        else if(pos_i < t)
            pos_i += 1;
        else if (pos_j > t)
            pos_j -= 1;
        else if (pos_j <t)
            pos_j += 1;

        num_swaps++;
    }

    return num_swaps;
}

int main() {

    int N = 5;

    vector<vector<int>> mat(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> mat[i][j];
        }

    cout << swap_one(mat, N) << endl;

    return 0;
}
