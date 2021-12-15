#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Номер некоторого года: ";
	cin >> a;
	b = (a / 100) + 1;
	cout << b << " номер столетия.";

}
