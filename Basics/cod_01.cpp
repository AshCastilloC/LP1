#include <iostream>

int main()
{
    // Conversiones de tipos no seguras
    double d = 0;
    while (cin >> d){
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
            << "_i=="   << i
            << "_i2=="  << i2
            << "_char(" <<  c   << ")\n";
    }
    double x = 2.7;
    int y = x; // y se convierte en 2
    int a = 1000;
    char b = a; // b se convierte en -24
}
