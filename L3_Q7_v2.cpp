/*
7.	Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, 
depois a operação (+, -, *, /), outro número, outra operação, outro número, e assim 
continua até que ele digite enfim o sinal “=”, quando então a calculadora mostra o resultado. 
Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 4 = 6. O algoritmo deve resolver a expressão na ordem 
de digitação.
*/

#include <iostream>

using namespace std;

int main(){

    float num, resultado;
    char op;
    bool vez1 = true;

    do{
        cout << "\nDigite um numero:";
        cin >> num;
        if(vez1){ 
            resultado = num;
            vez1 = false;
        }else{
            switch(op){
                case '+': resultado = resultado + num;
                break;
                case '-': resultado = resultado - num;
                break;
                case '*': resultado = resultado * num;
                break;
                case '/': 
                while(num==0){
                    cout << "\nNao eh possivel divisao por 0, digite outro numero: ";
                    cin >> num;
                }
                resultado = resultado / num;
                break;
            }
             
        }
        cout << "\nDigite a operacao (+, -, *, /):";
        cin >> op;
          
    }while(op!='=');

    cout << "\n\nResultado = " << resultado; 

    cout << "\n";
    system("PAUSE");
}