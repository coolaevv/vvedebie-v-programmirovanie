#include <iostream>

using namespace std;

int main (){
    int n;
    char c;

    cout << "Direction:";
    cin >> c;
    cout << "Operation:";
    cin >> n;

    switch (c) {
        case 'Ñ':
            switch (n) {
                case 1:
                    c='Ç';
                    break;
                case 0:
                    c='Ñ';
                    break;
                case -1:
                    c='Â';
                    break;
                }
            break;
        case 'Â':
            switch (n) {
                case 1:
                    c='Ñ';
                    break;
                case 0:
                    c='Â';
                    break;
                case -1:
                    c='Þ';
                    break;
                }
        case 'Þ':
            switch (n) {
                case 1:
                    c='Â';
                    break;
                case 0:
                    c='Þ';
                    break;
                case -1:
                    c='Ç';
                    break;
            }
            break;
        case 'Ç':
            switch (n) {
                case 1:
                    c='Þ';
                    break;
                case 0:
                    c='Ç';
                    break;
                case -1:
                    c='Ñ';
                    break;
            }
    }
    cout << c;
    return 0;
}
