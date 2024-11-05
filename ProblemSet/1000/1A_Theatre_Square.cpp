#include <iostream>
using namespace std;

int main()
{
	int n, m, a; cin >> n >> m >> a;
	long long a1, a2, at;
	if ((n % a) >= 1){
		a1 = (n / a) + 1;
	} else {
		a1 = n / a;
	}
	if ((m % a) >= 1){
		a2 = (m / a) + 1;
	} else {
		a2 = m / a;
	}

	at = a1 * a2;
	cout << at << endl;
}
