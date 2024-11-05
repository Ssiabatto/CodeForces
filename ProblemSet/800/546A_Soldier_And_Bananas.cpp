#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     ll k, n, w; cin >> k >> n >> w;

     ll total = 0;

     for (int i = 1; i <= w; i++){
          total += k*i;
     }

     total -= n;

     if (total > 0){
          cout << total << endl;
     } else {
          cout << "0" << endl;
     }
}
