#include <iostream>

using namespace std;

int main()
{
  int sal, dis, cont;
  
  cout << "Ingrese la distancia a recorrer: ";
  cin >> dis;
  
  if(dis > 0){
    dis -= 1;
    sal += 1;
    
    cont = 1;
    
    while(dis > 0){
        if(dis >= 9){
            dis -= cont * 9;
            sal += 1;
        }else{
            dis = 0;
            sal += 1;
        }
        cont += 1;
    }
    
    cout << "La cantidad de saltos necesarios es: " << sal;
  }
  return 0;
}
