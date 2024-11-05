#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     ll n; cin >> n;

     int act, counter; act = 0, counter = 0;

     while (n > 0){
          act = n % 10;

          if (act == 4 || act == 7){
               counter += 1;
          }

          n = n / 10;
     }

     if (counter == 4 || counter == 7){
               cout << "YES" << endl;
     } else {
          cout << "NO" << endl;
     }
}
