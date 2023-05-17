/*
Implementar o jogo da velha
*/

#include<iostream>

using namespace std;

int main(){

    int cont=1, linha, coluna, casa;
    bool alguemGanhou = false;
    char jogador = 'X', c1, c2, c3, c4, c5, c6, c7, c8, c9;

    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = '-';

    // mostrar o tabuleiro inicial
    cout << "\n\tC1     C2      C3";
    cout << "\n\tC4     C5      C6";
    cout << "\n\tC7     C8      C9";

    do{
        //pedir a jogada
        cout << "\n\nJogador " << jogador << " faca sua jogada";
        do{
            cout << "\nDigite a casa desejada: ";
            cin >> casa;
        }while((casa<1)||(casa>9));
        //executar a jogada
        // a casa está ocupada?
        switch(casa){
            case 1: c1 = jogador;
            break;
            case 2: c2 = jogador;
            break;
            case 3: c3 = jogador;
            break;
            case 4: c4 = jogador;
            break;
            case 5: c5 = jogador;
            break;
            case 6: c6 = jogador;
            break;
            case 7: c7 = jogador;
            break;
            case 8: c8 = jogador;
            break;
            case 9: c9 = jogador;
            break;
        }

        //escrever o tabuleiro
        cout << "\n\t" << c1 << "\t" << c2 << "\t" << c3;
        cout << "\n\t" << c4 << "\t" << c5 << "\t" << c6;
        cout << "\n\t" << c7 << "\t" << c8 << "\t" << c9;

        // se é maior ou igual a 5a rodada
            //ver se alguem ganhou 

        cont++; //anda a rodada
        //muda o jogador
        if(jogador == 'X'){
            jogador = 'O';
        }else{
            jogador = 'X';
        }
    }while((cont<=9)&&(!alguemGanhou));


    cout << "\n\n";
    system("pause");
}