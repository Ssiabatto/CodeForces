#include <bits/stdc++.h>
using namespace std;

int main(){
     int x; cin >> x;

     int pasos = 0;

     if (x % 5 != 0){
          pasos = (x / 5) + 1;
     } else{
          pasos = x / 5;
     }

     cout << pasos << endl;
}
