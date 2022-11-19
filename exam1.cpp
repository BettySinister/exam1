#include <iostream> 
using namespace std;

int main() {
	int input;
	cout << "Enter the amount of lines to display: ";
	cin >> input;
	for (int i = 1; i < input + 1; i++) {
		for (int j = 1; j < 11; j++) {
			cout << i * j << ' ';
			if (i * j < 10) cout << ' ';
		}
		cout << endl;
	}
}