#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
	int N, num;
	string str;
	deque<int> deq;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push_front") {
			cin >> num;
			deq.push_front(num);
		}
		else if (str == "push_back") {
			cin >> num;
			deq.push_back(num);
		}
		else if (str == "pop_front") {
			if (deq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (deq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
		}
		else if (str == "size") {
			cout << deq.size() << "\n";
		}
		else if (str == "empty") {
			if (deq.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (str == "front") {
			if (deq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << deq.front() << "\n";
			}
		}
		else if (str == "back") {
			if (deq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << deq.back() << "\n";
			}
		}
	}
	return 0;
}