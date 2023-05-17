/*
18.	Elabore um algoritmo que leia N dígitos numéricos, e gere um único número decimal. 
Ex: (2,3,2,0) = 2320.

*/

#include<iostream>

using namespace std;

int main(){

    int N, cont, digito, fator = 1, numFinal = 0;

    cout << "\nQuantos digitos numericos serao digitados? ";
    cin >> N;
    // fator = 1000 para N = 4
    for(cont = 1; cont < N; cont++){
        fator = fator * 10;
    }

    for(cont = 1; cont <= N; cont++){
        cout << "\n\tDigito: ";
        cin >> digito;
        numFinal = numFinal + (digito * fator);
        fator = fator/10;
    }

    cout << "\nNumero completo = " << numFinal;
    
    cout << "\n\n";
    system("pause");
}