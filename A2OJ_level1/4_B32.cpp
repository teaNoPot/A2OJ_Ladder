/**
 * B. Borze
 */
 
 #include <bits/stdc++.h>
 #define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

 using namespace std;

 int main() {

     string a = "";
     string b = "";
     cin >> a;

     while(a != "") {
         if(a[0] == '.'){
             b+="0";
             a.erase(0,1);
         } else if (a[1] == '.') {
             b+="1";
             a.erase(0,2);
         } else if (a[1] == '-') {
             b+="2";
             a.erase(0,2);
         }
     }


     cout << b << endl;


     return 0;
 }
