// 9.	Elabore um algoritmo que leia um vetor A de 10 elementos e construa um
// vetor P formado pelos índices dos elementos pares de A. 
// Exemplo: Se A = [1  3  6  7  8], seus elementos pares estão nos índices 2 e 4 . 
// Assim, P =  [2  4].

#include <iostream>

using namespace std;

int main(){

    int a[10], i, tamanho = 0, j = 0;

    for(i=0; i<10; i++){
        cout << "\nDigite o valor do indice [" << i << "] do vetor A: ";
        cin >> a[i];
        if(a[i]%2==0){
            tamanho++;
        }
    }

    cout << "\n\nVetor a: ";
    for(i=0; i<10; i++){
        cout << a[i] << " ";
    }

    if(tamanho>0){
        int p[tamanho];
        for(i=0; i<10; i++){
            if(a[i]%2==0){
                p[j++] = i;
                //j++;
            }
        }
        cout << "\n\nVetor p: ";
        for(i=0; i<tamanho; i++){
            cout << p[i] << " ";
        }
    }else{
        cout << "\nNao existem elementos pares no vetor p";
    }

    cout << "\n";
    system("PAUSE");
}