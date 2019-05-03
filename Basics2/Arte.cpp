#include<iostream>
#include<vector>
using namespace std;

vector<int> colores;
vector<int> coloresD;
 int main()
 {
    int cantidadPosiciones, color;
 	cout << "Ingrese la cantidad de posiciones: ";
 	cin >> cantidadPosiciones;

 	int posicion = 1;

 	while(cantidadPosiciones > 0){
        cout << "Ingrese el color de la posicion " << posicion << " : ";
        cin >> color;

        colores.push_back(color);

        int coloresExistentes = 0;

        for(int i = 0; i < coloresD.size(); i++){
            if (color == coloresD[i]){
                coloresExistentes++;
            }
        }
        if(coloresExistentes <= 0){
            coloresD.push_back(color);
        }
        posicion++;
        cantidadPosiciones--;
 	}

 	if(colores.size() >= 3){
        if(coloresD.size() <= (colores.size() - 2)){
            cout << "Si se puede";
        }else{
            cout << "No se puede";
        }
 	}else{
        cout << "No se puede.";
 	}

 	return 0;
 }
