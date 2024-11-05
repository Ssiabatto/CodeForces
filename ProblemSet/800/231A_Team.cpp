#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int problems = 0;
	for (int i = 0; i < n; i++){
		int check = 0;
		int a, b, c; cin >> a >> b >> c;
		if (a == 1){
			check +=1;
		}
		if (b == 1){
			check +=1;
		}
		if (c == 1){
			check +=1;
		}
		if (check >= 2){
			problems += 1;
		}
	}
	cout << problems;
}
