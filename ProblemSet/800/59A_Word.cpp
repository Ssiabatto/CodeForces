#include <bits/stdc++.h>
using namespace std;

int main(){
     string s; cin >> s;
     int largo = s.length();
     int mayusc = 0;
     int minusc = 0;

     for (int i = 0; i < largo; i++){
          char act = s[i];

          if (act != tolower(s[i])){
               mayusc += 1;
          } else{
               minusc += 1;
          }
     }

     if (minusc >= mayusc){
          for (int i = 0; i < largo; i++){
               char act = tolower(s[i]);
               cout << act;
          }
     } else{
          for (int i = 0; i < largo; i++){
               char act = toupper(s[i]);
               cout << act;
          }
     }
}
