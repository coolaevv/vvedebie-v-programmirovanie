#include <iostream>
 
using namespace std;
 
void PowerA3(double A, double &B){
    B = A * A * A;
}
 
int main(void) {
    double mas[5] = {1, 2, 3, 4, 5};
    for ( int i = 0; i < 5; i++ ) {
        PowerA3(mas[i], mas[i]);
        cout << mas[i] << ' ';
    }
    return 0;
}
