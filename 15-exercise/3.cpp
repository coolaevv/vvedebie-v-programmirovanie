#include <iostream>

using namespace std;

float RingS(float r1, float r2) {
	float s;
	s = 3,14 * (  (r1 * r1) - (r2 * r2) );
	
	if ( r1 > r2 ) {
		return s;
	}else {
		return 0;
	}
}

int main () {
	setlocale(LC_ALL, "Russian");
	
	float r1, r2;
	
	for ( int i = 1; i <= 3; i++ ) {
		cout << "Введите R1: ";
		cin >> r1;
		
		cout << "Введите R2: ";
		cin >> r2;
		
		cout << "S " << i << " = " << RingS(r1, r2) << endl;
	}
	
	return 0;
}
