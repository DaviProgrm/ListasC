/*
2.	Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos 
N motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de 
recursos arrecadados (somatório de todas as multas). O algoritmo deverá imprimir 
também o número da carteira do motorista que obteve o maior número de multas.
*/

#include <iostream>

using namespace std;

int main(){
    int numCarteira, qtdMultas, cont, maiorQtd = -1, numCarteiraMaiorQtd;
    float valorMulta, divida, total = 0;
    char resposta;

    do{
        divida = 0;    
        cout << "\nDigite o numero da carteira de motorista: ";
        cin >> numCarteira;
        
        do{
            cout << "\nDigite a quantidade de multas: ";
            cin >> qtdMultas;
        }while(qtdMultas<0);

        if(qtdMultas > maiorQtd){
            maiorQtd = qtdMultas;
            numCarteiraMaiorQtd = numCarteira;
        }

        for(cont=1; cont<=qtdMultas; cont++){
            cout << "\n\tDigite o valor da multa numero " << cont << ": ";
            cin >> valorMulta;
            divida = divida + valorMulta;
        }
        cout << "\nA divida do motorista de carteira " << numCarteira << " eh " << divida;
        total = total + divida;
        cout << "\nDeseja continuar? s/n ";
        cin >> resposta;
    }while(resposta == 's');

    cout << "\nO numero da carteira do motorista com maior quantidade de multas eh: " << numCarteiraMaiorQtd;

    cout << "\nTotal de recursos arrecadados: " << total;
    cout << "\n";
    system("PAUSE");
}