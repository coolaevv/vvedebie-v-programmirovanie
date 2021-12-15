#include <iostream>
using namespace std;
int main()
{   
    int a,b,c,f,e,g;
    cin >> a >> b>> c; 
    f = a / c;
    e = b / c;
    g = a * b - c * c * f * e;
    cout << f * e << " " << g;
    return 0;
}
