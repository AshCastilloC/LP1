#include <iostream>
using namespace std;

int funcion(cant){
    if(cant<= 0){
        cout << "ERROR";
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int f, c;

	cout << "Cantidad de filas: ";
	cin >> f;
	
	cout << "Cantidad de columnas: ";
    cin >> c;
    
    if(funcion(f) && funcion(c)){
        if((f * c) % 2 == 0){
        cout << "Es posible que los estudiantes se muevan ";
        }else{
            cout << "No es posible que los estudiantes se muevan";
        }
    }
    
	return 0;
}
