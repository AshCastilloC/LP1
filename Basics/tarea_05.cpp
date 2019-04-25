#include <iostream>
using namespace std;

int square(int x)
{
    int resultado = 0;
    for (int i = 1; i <= x; i=i+1)
    {
        resultado += x;
    }
    return resultado;
}

int main()
{
    cout << 2 << " al cuadrado es: " << square(2) << endl;
    return 0;
}
