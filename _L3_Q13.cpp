/*
13.	Elabore um algoritmo que leia um número inteiro qualquer 
e verifique se ele é quadrangular. Se for, mostrar os próximos 
10 quadrangulares depois dele. Se não for, informar. 
OBS: Os números quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ... 

*/

#include<iostream>

using namespace std;

int main(){

    int num, cont=1, numCalculado, cont2;

    cout << "\nDigite um numero para verificar se eh quadrangular: ";
    cin >> num;

    do{
        numCalculado = cont*cont;
        cont++;
    }while((numCalculado)<num);

    if(numCalculado==num){
        cout << "\nEh quadrangular. Proximos 10: ";

        for(cont2=1; cont2<=10; cont2++){
            cout << (cont*cont) << " ";
            cont++;
        }

    }else{
        cout << "\nNao eh quadrangular";
    }

    
    cout << "\n\n";
    system("pause");
}