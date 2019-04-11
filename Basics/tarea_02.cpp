#include <iostream>
using namespace std;

int main()
{
  char t;
  double cant;
  double resultado;

  cout<<"Ingrese el tipo de moneda a convertir: dolar(d),euro(e),yen(y),libra(l),yuan(yu),shekel(s)";
  cin>>t;
  cout<<"Ingrese la cantidad a convertir";
  cin>>cant;
  switch (t){
      case 'y':
       resultado=cant/111.40;
       break;
      case 'l':
       resultado=cant/0.76;
       break;
      case 'e':
       resultado=cant/0.89;
       break;
      case 'yu':
       resultado=cant/6.72;
       break;
      case 's':
       resultado=cant/3.58;
       break;
      case 'd':
       cout<<"Ingrese el tipo de moneda a convertir: euro(e),yen(y),libra(l),yuan(yu),shekel(s)";
       cin>>t;
       switch (t){  
           case'l':
            resultado=cant*0.76;
            break;
           case'e':
            resultado=cant*0.89;
            break;
           case'y':
            resultado=cant*111.40;
            break;
           case 's':
            resultado=cant*3.58;
            break;
           case 'yu':
            resultado=cant*6.72;
            break;
           default:
            cout<<"La moneda ingresada es incorrecta";
            break;
                    
        }
        break;
       default:
        cout<<"La moneda ingresada es incorrecta";
        break;
    }
  
  cout<<"El tipo de cambio es ";
  cout<<resultado;
 }
