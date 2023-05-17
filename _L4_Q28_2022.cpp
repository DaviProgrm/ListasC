/*
28.	Faça um algoritmo que gere e escreva automaticamente a seguinte matriz:
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1

*/

#include <iostream>

using namespace std;

int main(){
   
    int i, j, cont = 1, M[6][6];

/*    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            M[i][j] = cont;
        }
    }
    cout << "\n\tMatriz: \n\t"; 
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            cout << "\t " << M[i][j];
        }
        cout << "\n\t";
    }

    cont++;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            M[i][j] = cont;
        }
    }
    cout << "\n\tMatriz: \n\t"; 
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            cout << "\t " << M[i][j];
        }
        cout << "\n\t";
    }

    cont++;
    for(i=2; i<4; i++){
        for(j=2; j<4; j++){
            M[i][j] = cont;
        }
    }
*/


    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            M[i][j] = cont;
        }
    }
    cont++;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            if(((i==2)&&(j==2))||((i==3)&&(j==2))){
                cont++;
            }
            if(((i==2)&&(j==4))||((i==3)&&(j==4))){
                cont--;
            }
            M[i][j] = cont;
        }
    }
    cout << "\n\tMatriz: \n\t"; 
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            cout << "\t " << M[i][j];
        }
        cout << "\n\t";
    }

    cout << "\n";
    system("PAUSE");
}