#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, column, row1, column1; row = 0, column = 0;

    for (int i = 0; i < 5; i++){
        row += 1;
        column = 0;
        for (int j = 0; j < 5; j++){
            column += 1;
            int n; cin >> n;
            if (n == 1){
                column1 = column; row1 = row;
            }
        }
    }

    int moves = (abs(row1 - 3)) + (abs(column1 - 3));

    cout << moves;

}
