#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
		
		int vacas=0;
		int toros=0;
		srand (time(NULL));
		int numero=rand()%10;
		int n[4];
		int u[4];
	
	n[0]=numero;
	numero=rand()%10;
	n[1]=numero;
	numero=rand()%10;
	n[2]=numero;
	numero=rand()%10;
	n[3]=numero;
	numero=rand()%10;

	cout<<"Ingrese el numero 1"<<endl;
	cin>>n[0];
	cout<<"Ingrese el numero 2"<<endl;
	cin>>n[1];
	cout<<"Ingrese el numero 3"<<endl;
	cin>>n[2];
	cout<<"Ingrese el numero 4"<<endl;
	cin>>n[3];

    int i=0;
    while (i<4)
    {
    	
    	if (n[i]==u[i])
		{
    		toros=toros+1;
		}
		int j=0;
		while(j<4)
		{
			if (i != j && n[i]==u[j])
			{
				vacas=vacas+1;
			}
		
		 j++;
		}
	    cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" "<<n[3]<<endl;
		cout<<u[0]<<" "<<u[1]<<" "<<u[2]<<" "<<u[3]<<endl;
		cout<<"toros"<<toros<<endl;
		cout<<"vacas"<<vacas<<endl;
	
	    
	 i++;
	}


	return 0;
}
