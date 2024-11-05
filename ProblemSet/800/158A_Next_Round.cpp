#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, k, valork, counter; cin >> n >> k;
     counter = 0;
     valork = 0;
     while(true){
          counter += 1;
          int a; cin >> a;

          if (a == 0){
               break;
          }

          if (k == counter){
               valork = a;
          }

          if (a < valork){
               break;
          }

          if (counter == n){
               counter += 1;
               break;
          }
     }

     cout << counter - 1 << endl;
}
