/*
1.	Elabore um algoritmo que leia o código (inteiro) e a idade de 100 
pessoas e escreva ao final o código da pessoa mais velha e a idade da pessoa mais nova.
*/

#include <iostream>

using namespace std;

int main(){
    int codigo, idade, cont, menorIdade, codMaisVelha, maiorIdade;

    for(cont=1; cont<=3; cont++){
        cout << "\nDigite o codigo da pessoa: ";
        cin >> codigo;
        cout << "\nDigite a idade: ";
        cin >> idade;

        if(cont==1){
            menorIdade = idade;
            maiorIdade = idade;
            codMaisVelha = codigo;
        }else{
            if(idade<menorIdade){
                menorIdade = idade;
            }
            if(idade>maiorIdade){
                maiorIdade = idade;
                codMaisVelha = codigo;
            }
        }

    }

    cout << "\nA menor idade lida foi: " << menorIdade;
    cout << "\nO codigo da pessoa mais velha foi: " << codMaisVelha;

    cout << "\n\n";    
    system("PAUSE");
}











