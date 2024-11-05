#include <bits/stdc++.h>
using namespace std;

int main(){
     int n, vicA, vicD; cin >> n; vicA = 0; vicD = 0;

     string victorias; cin >> victorias;

     for (int i = 0; i < n; i++){
          char act = victorias[i];

          if (act == 'A'){
               vicA += 1;
          } else{
               vicD += 1;
          }
     }

     if (vicA > vicD){
          cout << "Anton" << endl;
     } else if (vicD > vicA){
          cout << "Danik" << endl;
     } else{
          cout << "Friendship" << endl;
     }
}
