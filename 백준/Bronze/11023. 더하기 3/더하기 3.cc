#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, sum = 0;

	while (cin >> n) {
		sum += n;
	}

	cout << sum;

	return 0;
}