#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, counter; cin >> n; counter = 0;
     string s; cin >> s;

     char act, last;

     for (int i = 0; i < n; i++){
          act = s[i];

          if (act == last){
               counter += 1;
          }

          last = act;
     }

     cout << counter;
}
