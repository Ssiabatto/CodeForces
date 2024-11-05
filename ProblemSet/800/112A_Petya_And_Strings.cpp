#include <bits/stdc++.h>
using namespace std;

int main(){
     string s1, s2; cin >> s1 >> s2;

     int result, counter; result = 0, counter = 0;

     int le; le = s1.length();

     while (true){
          if (counter > le - 1){
               break;
          }

          char act1, act2;
          act1 = tolower(s1[counter]); /// Posicion actual de las cadenas en minúsculas
          act2 = tolower(s2[counter]);

          if (act1 > act2){
               result = 1;
               break;
          } else if(act1 < act2){
               result = -1;
               break;
          }

          counter += 1;
     }

     cout << result << endl;
}
