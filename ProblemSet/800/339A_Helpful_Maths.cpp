#include <bits/stdc++.h>
using namespace std;

int main(){
     string s; cin >> s;
     int unos, dos, tres; unos = 0, dos = 0, tres = 0;

     int largo; largo = s.length();

     for (int i = 0; i < largo; i = i + 2){
          if (s[i] == '1'){
               unos += 1;
          } else if(s[i] == '2'){
               dos += 1;
          } else{
               tres += 1;
          }
     }

     int totalnums = unos + dos + tres;

     for (int i = 0; i < totalnums; i++){
          if (i != 0){
               cout << "+" ;
          }

          if (unos > 0){
               cout << "1";
               unos -= 1;
          } else if (dos > 0){
               cout << "2";
               dos -= 1;
          } else{
               cout << "3";
               tres -= 1;
          }
     }
}
