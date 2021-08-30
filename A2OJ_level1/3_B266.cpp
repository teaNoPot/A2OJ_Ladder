/**
 * B. Queue at School
 */

 #include <bits/stdc++.h>
 #define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

 using namespace std;

 string move_forward(string q) {

     string new_q = q;

     for(int i=0; i<q.length(); i++) {
         if(q[i] == 'B' && q[i+1] == 'G') {
             new_q[i] = 'G';
             new_q[i+1] = 'B';
         }
     }

     return new_q;
 }

 int main() {

     string q = "";
     int n,t;
     cin >> n >> t;
     cin >> q;

     for(int i=0; i<t; i++)
         q = move_forward(q);

     cout << q << endl;

     return 0;
 }
