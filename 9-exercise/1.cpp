# include <iostream>
 
using namespace std;

int main () {
	
	setlocale(LC_ALL, "Russian");
	
	int N, sec;
	
	cout << "Введите количество секунд: ";
	cin >> N;
	
	sec = N % 1440;
	
	cout << "Количество секунд, прошедших с начала последнего часа: " << sec;
}
