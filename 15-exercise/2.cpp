#include <iostream>
using namespace std;

int Sign(int x){
	if (x < 0) return -1;
	if ( x == 0 ) return 0;
	if ( x > 0 ) return 1;
}

int main(int argc, const char* argv[]){
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите À: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	
	cout << "Значение выражения: " << Sign(A) + Sign(B);
	
	return(0);
}
