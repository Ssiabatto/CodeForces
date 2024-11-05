#include <bits/stdc++.h>
using namespace std;

int main(){
     int a, b; cin >> a >> b;

     int counter = 0;

     while (true){
          if (a > b){
               break;
          }

          a = a * 3;
          b = b * 2;
          counter += 1;
     }

     cout << counter << endl;
}
