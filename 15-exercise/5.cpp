#include <iostream>

using namespace std;

float Fact2(float n) {
	int temp=1;
    for (; n > 0;n -= 2) temp *= n;
    return temp;
}

int main () {
	setlocale(LC_ALL, "Russian");
	
	int n;
	
	for ( int i = 1; i <= 5; i++ ) {
		cout << "Введите N: ";
		cin >> n;
		cout << i << " - " << Fact2(n) << endl;
	}
	
	return 0;
}
