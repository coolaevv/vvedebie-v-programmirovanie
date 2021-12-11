#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	system("chcp 1251"); 							// кирилица в консоле
	setlocale(LC_ALL, "Russian"); 					// кирилица в консоле
	
	int x1, x2, x3, y1, y2, y3 = 0;					// объ€вление переменных
	double s, p, a, b, c, pp = 0;					// объ€вление переменных
	
	cout << "¬ведите переменную x1: ";				
	cin >> x1;										// ввод с клавиатуры значение переменной x1
	cout << "¬ведите переменную y1: ";
	cin >> y1;										// ввод с клавиатуры значение переменной y1
    cout << "¬ведите переменную x2: ";
	cin >> x2;										// ввод с клавиатуры значение переменной x2
	cout << "¬ведите переменную y2: ";
	cin >> y2;										// ввод с клавиатуры значение переменной y2
	
	a = sqrt( pow( float( x2 - x1 ), 2 ) + pow( float( y2 - y1 ), 2 ) );
	b = sqrt( pow( float( x3 - x2 ), 2 ) + pow(float( y3 - y2 ), 2 ) );
	c = sqrt( pow( float( x3 - x1 ), 2) + pow( float( y3 - y1 ), 2 ) );
	p = a + b + c;
	pp = p / 2;
	s = sqrt( pp * ( pp - a ) * ( pp - b) * ( pp - c ) );
	
	cout << "ѕлощадь: " << s << endl;
	cout << "ѕериметр: " << p;
	
	return 0;
}
