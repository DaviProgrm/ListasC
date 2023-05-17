/*
9.	Elabore um algoritmo que mostre o calendário de um determinado mês. 
Os dados de entrada são o mês (cujos dados devem ser mostrados) e o dia 
da semana em que esse mês inicia. Assuma que esse mês está em um ano que
não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve 
ser como mostrado abaixo. Ex: janeiro, começando na 5a feira:

    DOM SEG TER QUA QUI SEX SAB
                    1   2   3
    4   5   6   7   8   9   10
    11  12  13  14  15  16  17
    18  19  20  21  22  23  24
    25  26  27  28  29  30  31

*/

#include<iostream>

using namespace std;

int main(){

    int mes, dia, totalDias, cont, qtdVoltasLaco=1, totaldias1aSemana;

    // entrada: mês e o dia que o mês inicia
    cout << "\nDigite o mes (1-jan, ... 12-dez): ";
    cin >> mes;
    cout << "\nDigite o dia da semana que o mes inicia ";
    cout << "(1-dom, 2-seg, 3-ter, 4-qua, 5-qui, 6-sex, 7-sab): ";
    cin >> dia;

    // processamento: calcular o calendário
    switch(mes){
        case 2: //fev
            totalDias = 28;
            break;
        case 1: //jan
        case 3: //mar
        case 5: //mai
        case 7: //jul
        case 8: //ago
        case 10: //out
        case 12: //dez
            totalDias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            totalDias = 30;
            break;
    }


    totaldias1aSemana = 7-dia+1;
    //cout << "\ntotaldias1aSemana = " << totaldias1aSemana;

    cout << "\n\tDOM SEG TER QUA QUI SEX SAB";
    cout << "\n\t";
    for(cont=1; cont<=totalDias; cont++){
        if((cont==1)){
            switch(dia){
                case 2: cout << "    "; break;
                case 3: cout << "        "; break;
                case 4: cout << "            "; break;
                case 5: cout << "                "; break;
                case 6: cout << "                    "; break;
                case 7: cout << "                        "; break;
            }
        }
        if(cont < 10){
            cout << cont << "   "; // 3 espaços em branco depois do número
        } else {
            cout << cont << "  "; // 2 espaços em branco depois do número
        }
        if(qtdVoltasLaco==totaldias1aSemana){
            cout << "\n\t";    // pular da 1a para a 2a linha do calendário
            qtdVoltasLaco = 0; // recomeça a contagem de 7 dias por linha
            totaldias1aSemana = 0; //zerando a variável para evitar entrada a partir da 2a linha do calendário
        }
        if((qtdVoltasLaco!=0)&&(qtdVoltasLaco%7==0)){
            cout << "\n\t";    // pular as próximas linhas no calendário
            //qtdVoltasLaco=0;
        }
        qtdVoltasLaco++;
    }


    // saída: escever o calendário

    cout << "\n\n";
    system("pause");
}