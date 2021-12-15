#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Год:";
    cin>>n;

    cout << "Год ";

    switch ((n) % 10) {
	    case 0:
	    case 1:
	        cout << "бел";
	        break;
	    case 2:
	    case 3:
	        cout << "черн";
	        break;
	    case 4:
	    case 5:
	        cout << "зелен";
	        break;
	    case 6:
	    case 7:
	        cout << "красн";
	        break;
	    case 8:
	    case 9:
	        cout << "желт";
	        break;
    }

    switch ((n + 1) % 5) {
	    case 0:
	    case 1:
	    case 2:
	    case 3:
	    case 4:
	    case 5:
	    case 9:
	    case 10:
	    case 11:
	        cout << "ой ";
	        break;
	    case 6:
	    case 7:
	    case 8:
	        cout << "ого ";
	        break;
    }

    switch ((n + 8) % 12) {
	    case 0:
	        cout << "крысы";
	        break;
	    case 1:
	        cout << "коровы";
	        break;
	    case 2:
	        cout << "тигра";
	        break;
	    case 3:
	        cout << "зайца";
	        break;
	    case 4:
	        cout << "дракона";
	        break;
	    case 5:
	        cout << "змеи";
	        break;
	    case 6:
	        cout << "лошади";
	        break;
	    case 7:
	        cout << "овцы";
	        break;
	    case 8:
	        cout << "обезьяны";
	        break;
	    case 9:
	        cout << "курицы";
	        break;
	    case 10:
	        cout << "собаки";
	        break;
	    case 11:
	        cout << "свиньи";
	        break;
    }

    return 0;
}
