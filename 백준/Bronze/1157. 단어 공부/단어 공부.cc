#include <iostream>
#include <string.h>
using namespace std;

char a[1000005];
int arr[26];

int main() {
	int max = 0;
	int size;
	char answer;

	cin >> a;
	size = strlen(a);

	for (int i = 0; i < size; i++) {
		if (a[i] >= 'a') {
			arr[a[i] - 'a']++;
		}
		else {
			arr[a[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			answer = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			answer = 'A' + i;
		}
	}

	cout << answer;

	return 0;
}