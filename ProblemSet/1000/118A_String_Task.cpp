#include <bits/stdc++.h>
using namespace std;

int main(){
     string s; cin >> s;
     int largo = s.length();

     for (int i = 0; i < largo; i++){
          char act = tolower(s[i]);
          if (act != 'a' && act != 'e' && act != 'i' && act != 'o' && act != 'u' && act != 'y'){
               cout << "." << act;
          }
     }
}
