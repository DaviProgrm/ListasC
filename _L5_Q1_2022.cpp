/*
Elabore um algoritmo que leia uma frase em uma string e 
uma palavra em outra string, verifique e escreva se a palavra está 
contida na frase.
Entradas: “esta é a frase” e “frase”
Saída: a palavra “frase” está contida na frase “esta é a frase”.
*/

#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
   
    string frase, palavra;
    int posicao;
    char texto[10];

    cout << "\nDigite uma frase: ";
    getline(cin, frase);
    cout << "\nDigite uma palavra: ";
    getline(cin, palavra);

    cout << "\n\nretorno: " << frase.find(palavra);

    posicao = frase.find(palavra);

    if((posicao >= 0) && (posicao <= (frase.size()-1))){
        cout << "\nPalavra encontrada";
        cout << toupper(texto,0);
    }else{
        cout << "\nPalavra nao encontrada";
    }
    cout << "\n\ntamanho 1: " << frase.size();
    cout << "\n\ntamanho 2: " << frase.length();

    cout << "\n";
    system("PAUSE");
}