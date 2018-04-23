/*
Programa_40 llenar e imprimir una tabla de 2 x 3
Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 17 de marzo de 2015
*/


#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int matrix [2] [3], i, j;

    for (i=0; i<2; i++)
    {
         for (j=0; j<3; j++)
        {
         cout<<"introduce los valores de la matriz fila: "<<i<<" columna: "<<j<<" ";
         cin>>matrix[i][j];
        }
    }




    cout<<"\n\nCreando matriz de 2 x 3 \n\n";
    Sleep(5000);
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
        cout<<" "<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n\n";

system ("pause");
return 0;
}
