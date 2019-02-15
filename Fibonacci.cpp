#include <iostream>
using namespace std;

void progWelcome();
void progNthRequest();
void printOut();
void progContinue();
void progGoodbye();
void fiboSeq(int n, long long &result);

int n;
long long result;
bool progExit = false;

void main() {
	progWelcome();
	do {
		progNthRequest();
		fiboSeq(n, result);
		printOut();
		progContinue();
	} while (progExit == false);
	progGoodbye();
}

void progWelcome() {
	cout << "Welcome to Fibonacci Sequence Program\n" << endl;
}
void progNthRequest() {
	do {
		cout << "What is the desired Nth value for Fibonacci's Sequence?\n" << endl;
		cin >> n;
		cout << endl;
		if (n < 0) cout << "Must be a positive number\n" << endl;
	} while (n < 0);
}
void printOut() {
	cout <<"The result is: "<< result << endl << endl;
}
void progContinue() {
	cout << "Would you like to try a diffent Nth number?\n 1) yes\n 2) no\n" << endl;
	cin >> n;
	cout << endl;
	switch (n) {
	case 1: n = 0; break;
	default: progExit = true; break;
	}
}
void progGoodbye() {
	cout << "Goobdye\n" << endl;
}
void fiboSeq (int n, long long &result) {
	long long fiboSeq[3] = { 0,1 };
	switch (n) {
	case 0:
		result = 0; break;
	case 1:
		result = 1; break;
	default:
		for (int x = 1; x < n; x++) {
			fiboSeq[2] = fiboSeq[1] + fiboSeq[0];
			fiboSeq[0] = fiboSeq[1];
			fiboSeq[1] = fiboSeq[2];
		};
		break;
	};
	result = fiboSeq[2];
}
