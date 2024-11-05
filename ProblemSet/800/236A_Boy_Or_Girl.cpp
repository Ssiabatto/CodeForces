#include <bits/stdc++.h>
using namespace std;

int main(){
     string s; cin >> s;
     int largo = s.length();
     set<char> caracteres;

     for (int i = 0; i < largo; i++){
          caracteres.insert(s[i]);
     }

     if(caracteres.size() % 2 == 0){
          cout << "CHAT WITH HER!" << endl;
     } else{
          cout << "IGNORE HIM!" << endl;
     }
}
