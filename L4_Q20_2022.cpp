// 20.	Escreva um programa que leia um vetor de 13 elementos inteiros, 
// que é o gabarito de um teste da loteria esportiva, contendo os valores 1
// (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Leia, a seguir, para cada
// apostador, o número do seu cartão e um vetor de respostas de 13 posições.
// Verifique para cada apostador o números de acertos, comparando o vetor de
// gabarito com o vetor de respostas. Escreva o número do apostador e o número
// de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "ganhador".
// Finalizar inserindo um número de apostador negativo. 

#include <iostream>

using namespace std;

int main(){

    int vG[13], i, vR[13], numero, acertos;

    cout << "\nDigite os 13 valores do gabarito: ";
    for(i=0; i<13; i++){
        cin >> vG[i];
    }

    do{
        acertos = 0;
        cout << "\nDigite o numero do apostador (negativo para sair): ";
        cin >> numero;
        if(numero>0){
            //ler o vetor de respostas - jogo
            cout << "\nDigite os 13 valores do vetor resposta: ";
            for(i=0; i<13; i++){
                cin >> vR[i];
                if(vG[i]==vR[i]){
                    acertos++;
                }
            }
            cout << "\nO apostador " << numero << " conseguiu " << acertos << " acertos";
            if(acertos==13){
                cout << "\nGanhador!";
            }
        }
    }while(numero>=0);

    cout << "\n";
    system("PAUSE");
}