// 4.	Elabore um algoritmo para ler um vetor A de 20 números inteiros 
// e obter a maior diferença entre dois elementos consecutivos desse vetor.
// Ao final, escreva a maior diferença e os índices dos respectivos elementos. 

#include <iostream>

using namespace std;

int main(){

    int a[20], i, diferenca, maiorDiferenca = 0, iAnterior, iPosterior;

    for(i=0; i<20; i++){
        cout << "\nDigite o elemento do vetor a, indice [" << i << "]: ";
        cin >> a[i];
    }

    cout << "\nVetor a: ";
    for(i=0; i<20; i++){
        cout << a[i] << " ";
    }

    for(i=0; i<19; i++){
        diferenca = a[i] - a[i+1];
        if(diferenca<0) 
            diferenca *= -1;
        if(diferenca>maiorDiferenca){
            maiorDiferenca = diferenca;
            iAnterior = i;
            iPosterior = (i+1);
        }
    }

    cout << "\nA maior diferenca encontra-se entre os indices " << iAnterior << " e " << iPosterior;
    cout << "\nValor da diferenca: " << maiorDiferenca;
    
    cout << "\n";
    system("PAUSE");
}