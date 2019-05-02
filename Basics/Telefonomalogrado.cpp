#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros;

int s() {
    int sospechosos = 0;
    for(int i = 0; i < (numeros.size()-1); i++) {
        if(int(numeros[i]) != int(numeros[i+1])) {
            if(i != 0){
                if(int(numeros[i]) != int(numeros[i-1])){
                    sospechosos += 1;
                }else{
                    sospechosos += 2;
                }
            }else{
                sospechosos += 2;
            }
        }
    }
    return sospechosos;
}

int main()
{
    int ns, n;
    int c = 1;
    
    cout << "Ingresa la cantidad de personas :\t";
    cin >> ns;
    
    while(ns--){
        cout << "Persona numero " << c << " : ";
        cin >> n;
        numeros.push_back(n);
        
        c++;
    }
    
    cout <<"El numero de sospechosos es:"<<s();
    return 0;
}
