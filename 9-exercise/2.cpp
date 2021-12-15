#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int K, m;
	
	cout << "K:";
	cin >> K;
	cout << endl;
	cout << endl;
	m = (K % 7) + 1;
	cout << "Номер дня недели: " << m;
}
