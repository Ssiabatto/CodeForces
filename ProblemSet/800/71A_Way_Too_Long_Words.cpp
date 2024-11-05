#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int le = 0;
        string word; cin >> word;
        le = word.length();
        if (le > 10){
            string composed;
            cout << word[0];
            cout << le-2;
            cout << word[le-1] << endl;
        }
        else{
            cout << word << endl;
        }
    }
}
