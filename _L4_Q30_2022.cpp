/*
30.	Implemente o jogo da velha usando uma matriz como tabuleiro.
*/

#include <iostream>
#include<string>

using namespace std;

char tab[3][3] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};

void impressaoDaMatriz(){
    int i, j;
    cout << "\n\tTabuleiro inicial: \n\t";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << tab[i][j] << "\t";
        }
        cout << "\n\t";
    }
}


int main(){
   
    //char tab[3][3] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char marcacao = 'X';
    bool houveVencedor = false;
    int i, j, jogadas = 1, linha, coluna;

    cout << "inicio do algoritmo\n";
    
    impressaoDaMatriz();

    do{
        
        do{
            cout << "\nJogador " << marcacao << " faca sua jogada (linha e coluna): ";
            cin >> linha >> coluna;
        }while(tab[linha][coluna]!='-');

        tab[linha][coluna] = marcacao;

        impressaoDaMatriz();

        // verificar se houve vencedor
        if(jogadas>=5){
            if(((tab[0][0]==tab[0][1])&&(tab[0][1]==tab[0][2]))
            || ((tab[1][0]==tab[1][1])&&(tab[1][1]==tab[1][2]))
            || ((tab[2][0]==tab[2][1])&&(tab[2][1]==tab[2][2]))
            || ((tab[0][0]==tab[1][0])&&(tab[1][0]==tab[2][0]))
            || ((tab[0][1]==tab[1][1])&&(tab[1][1]==tab[2][1]))
            || ((tab[0][2]==tab[1][2])&&(tab[1][2]==tab[2][2]))
            || ((tab[0][0]==tab[1][1])&&(tab[1][1]==tab[2][2]))
            || ((tab[0][2]==tab[1][1])&&(tab[1][1]==tab[2][0]))){
                cout << "\n\tO jogador " << marcacao << " ganhou!";
                houveVencedor = true;
            }
        }

        if(marcacao=='X')
            marcacao = 'O';
        else
            marcacao = 'X';

        jogadas++;
        if(jogadas>9)
            cout << "\n\tDeu velha!";
    }while((jogadas<=9)&&(!houveVencedor));

    cout << "\nFIM DE JOGO";
    system("PAUSE");
}