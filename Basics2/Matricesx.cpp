#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int filas, columna, columnab;

    cout<<"Matriz A"<<endl;
    cout<<"Ingrese las filas de la matriz A: "<<endl;
	cin>>filas;
    cout<<"Ingrese las columnas de la matriz A: "<<endl;
	cin>>columna;
    for(int i=0; i<filas; ++i)
        for(int j=0; j<columna; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }

    cout<<"Matriz B"<<endl;
    cout<<"Ingrese las filas de la matriz B: "<<columna<<" (ya esta definido )"<<endl;
    cout<<"Columnas de B: "<<endl;
	cin>>columnab;
    for(int i=0; i<columna; ++i)
        for(int j=0; j<columnab; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }

    // Inicializamos la matriz C.
    for(int i=0; i<filas; ++i)
        for(int j=0; j<columna; ++j)
            C[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<filas; ++i)
        for(int j=0; j<columna; ++j)
            for(int k=0; k<columnab; ++k)
                C[i][j] += A[i][k] * B[k][j];

    cout<<"Matriz A: ";
    for(int i=0; i<filas; ++i)
    {
        for(int j=0; j<columnab; ++j)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Matriz B: ";
    for(int i=0; i<columnab; ++i)
    {
        for(int j=0; j<columna; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: ";
    for(int i=0; i<filas; ++i)
    {
        for(int j=0; j<columna; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
