#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros;

int s() {
    int suspects = 0;
    for(int i = 0; i < (numeros.size()-1); i++) {
        if(int(numeros[i]) != int(numeros[i+1])) {
            if(i != 0){
                if(int(numeros[i]) != int(numeros[i-1])){
                    suspects += 1;
                }else{
                    suspects += 2;
                }
            }else{
                suspects += 2;
            }
        }
    }
    return suspects;
}

int main()
{
    int ns, n;
    int c = 1;
    
    cout << "Ingresa la cantidad de numeros:\t";
    cin >> ns;
    
    while(ns--){
        cout << "Ingrese el numero " << c << " : ";
        cin >> n;
        numeros.push_back(n);
        
        c++;
    }
    
    cout <<s();
    return 0;
}
