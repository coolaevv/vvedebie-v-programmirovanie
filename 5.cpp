#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	system("chcp 1251"); 							// �������� � �������
	setlocale(LC_ALL, "Russian"); 					// �������� � �������
	
	int x1, x2, x3, y1, y2, y3 = 0;					// ���������� ����������
	double s, p, a, b, c, pp = 0;					// ���������� ����������
	
	cout << "������� ���������� x1: ";				
	cin >> x1;										// ���� � ���������� �������� ���������� x1
	cout << "������� ���������� y1: ";
	cin >> y1;										// ���� � ���������� �������� ���������� y1
    cout << "������� ���������� x2: ";
	cin >> x2;										// ���� � ���������� �������� ���������� x2
	cout << "������� ���������� y2: ";
	cin >> y2;										// ���� � ���������� �������� ���������� y2
	
	a = sqrt( pow( float( x2 - x1 ), 2 ) + pow( float( y2 - y1 ), 2 ) );
	b = sqrt( pow( float( x3 - x2 ), 2 ) + pow(float( y3 - y2 ), 2 ) );
	c = sqrt( pow( float( x3 - x1 ), 2) + pow( float( y3 - y1 ), 2 ) );
	p = a + b + c;
	pp = p / 2;
	s = sqrt( pp * ( pp - a ) * ( pp - b) * ( pp - c ) );
	
	cout << "�������: " << s << endl;
	cout << "��������: " << p;
	
	return 0;
}
