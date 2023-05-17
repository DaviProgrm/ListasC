
#include <iostream>

using namespace std;

struct Data{
    int dia, mes, ano;
};

struct dados{
    int percentual;
    float nota;
};

int* ordena(int* p, char ordem);
bool* validarDatas(Data* d);
float calculaSalarioPorFilho(float sal, int qtdF);
void calcularMulta(float velMax, float velAtual, float* pMulta);
dados calculaNota();

int main(){
    
    int op, numeros[3], i, qtdFilhos;
    char ordem;
    int* pVet;
    Data vDatas[5];
    bool* pDatas;
    float salario, multa, vMax, vAtual;
    int gabarito[2][10] = {{1,1,1,1,1,1,1,1,1,1},{1,2,1,2,1,2,1,2,1,2}};
    dados d;
  

    do{

        cout << "\n\t--------------------------";
        cout << "\n\t   Menu principal";
        cout << "\n\t--------------------------";
        cout << "\n\t   1 - ORDEM";
        cout << "\n\t   2 - DATA";
        cout << "\n\t   3 - SALARIO";
        cout << "\n\t   4 - MULTA";
        cout << "\n\t   5 - CALCULAR";
        cout << "\n\t   6 - SAIR";
        cout << "\n\t--------------------------";
        cout << "\n\tInforme a opcao desejada: ";
        cin >> op;

        switch(op){
            case 1: cout << "\n\tDigite tres valores inteiros: ";
            cin >> numeros[0] >> numeros[1] >> numeros[2];
            cout << "\n\tDigite 'c'-crescente ou 'd'-decrescente: ";
            cin >> ordem;
            pVet = ordena(numeros, ordem);
            cout << "\n\tVetor ordenado: ";
            for(i=0; i<3; i++){
                cout << pVet[i] << " ";
                //pVet++;
            }
            break;
            case 2: cout << "\n\tDigite 5 datas: ";
            for(i=0; i<5; i++){
                cout << "\ntData " << (i+1) << " (dd mm aaaa): ";
                cin >> vDatas[i].dia;
                cin >> vDatas[i].mes;
                cin >> vDatas[i].ano;
            }
            pDatas = validarDatas(vDatas);
            for(i=0; i<5; i++){
                if(pDatas[i]){
                    cout << "\n\tA data " << vDatas[i].dia << "/" << vDatas[i].mes << "/" << vDatas[i].ano << " eh valida";
                }else{
                    cout << "\n\tA data " << vDatas[i].dia << "/" << vDatas[i].mes << "/" << vDatas[i].ano << " NAO eh valida";
                }
            }
            break;
            case 3: cout << "\n\tDigite o salario de uma pessoa: ";
            cin >> salario;
            cout << "\n\tDigite a quantidade de filhos: ";
            cin >> qtdFilhos;
            cout << "\n\tSalario por filho: " << calculaSalarioPorFilho(salario, qtdFilhos);
            break;
            case 4: cout << "\n\tDigite a velocidade maxima: ";
            cin >> vMax;
            cout << "\n\tDigite a velocidade atual: ";
            cin >> vAtual;
            calcularMulta(vMax, vAtual, &multa);
            cout << "\n\tMulta = " << multa;
            break;
            case 5: d = calculaNota();
            cout << "\nConteudo percentual: " << d.percentual;
            cout << "\nConteudo nota: " << d.nota;
            break;
            case 6: cout << "\n\tFim de programa";
            break;
            default: cout << "\n\tOpcao invalida!";
        }
    
    }while(op!=6);

    cout << "\n";
    system("PAUSE");
}

int* ordena(int* p, char ordem){
    int i, j, maior, menor, vetOrdenado[3], posicao, aux;
    for(j=0; j<3; j++){ //buscar o menor elemento do vetor para usar como flag
        if(p[j]<menor){
            menor = p[j];
        }
    }
    // menor guarda o menor elemento do vetor
    for(i=0; i<3; i++){
        maior = p[0];
        posicao = 0;
        for(j=1; j<3; j++){ //buscar o maior elemento do vetor
            if(p[j]>maior){
                maior = p[j];
                posicao = j;
            }
        }
        // maior guarda o maior elemento do vetor
        vetOrdenado[i] = maior;
        p[posicao] = menor;
    }
    
    if(ordem=='c'){
        for(i=0; i<3; i++){
            p[i] = vetOrdenado[2-i];
        }
    }else{
        for(i=0; i<3; i++){
            p[i] = vetOrdenado[i];
        }
    }

    return p;
}

bool* validarDatas(Data* d){
    bool static p[5];
    int i;
    for(i=0; i<5; i++){
        //verificar se a data é válida
        if(
            (d[i].ano>0) && //ano válido
            
            ((d[i].mes>=1) && (d[i].mes<=12)) && // mês válido
            
            (((d[i].mes==2) && ((d[i].dia >=1) && (d[i].dia<=28)))  || //dias de fev

            ( ((d[i].mes==1)||(d[i].mes==3)||(d[i].mes==5)||
            (d[i].mes==7)||(d[i].mes==8)||(d[i].mes==10)||(d[i].mes==12)) && 
            ((d[i].dia >=1) && (d[i].dia<=31)))  || //dias dos meses de 31
        
            ( ((d[i].mes==4)||(d[i].mes==6)||(d[i].mes==9)||(d[i].mes==11)) &&
            ((d[i].dia >=1) && (d[i].dia<=30))))  //dias dos meses de 30
        ){
            p[i] = true;
        }else{
            p[i] = false;
        }
    }
    return p;
}

float calculaSalarioPorFilho(float sal, int qtdF){
    float valorSalario;

    // cálculo do valor do salário dedicado aos filhos
    valorSalario = 100;

    return valorSalario;
}

void calcularMulta(float velMax, float velAtual, float* pMulta){
    *pMulta = 10;
}

dados calculaNota(){
    dados meusDados;
    meusDados.nota = 8.5;
    meusDados.percentual = 85;
    return meusDados;
}