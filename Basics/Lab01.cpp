#include <iostream>
using namespace std;

int main()
{
  char t;
  double cant;
  double resultado;

  cout<<"Ingrese el tipo de moneda a convertir: dolar(d),euro(e),yen(y),libra(l)";
  cin>>t;
  cout<<"Ingrese la cantidad a convertir";
  cin>>cant;
  if (t=='y'){
       resultado=cant/111.40;
  }
  if (t=='l'){
      resultado=cant/0.76;
  }
  if (t=='e'){
      resultado=cant/0.89;
  }
  if (t=='d'){
      cout<<"Ingrese el tipo de moneda a convertir: euro(e),yen(y),libra(l)";
      cin>>t;
      if (t=='y'){
          resultado=cant*111.40;
      }
      if (t=='e'){
          resultado=cant*0.76;
      }
      if (t=='l'){
          resultado=cant*0.89;
      }
  }
  cout<<"El tipo de cambio es";
  cout<<resultado;

}
