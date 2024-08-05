#include <iostream>

using namespace std;

void dowhile_func(int tam){
    // calcular fatorial
    int cont=0;
    int soma=0;
    
    do{
        soma+=cont;
        cont++;
    }while (cont <= tam);

    cout << "resultado da soma - " << soma << endl;
}


int main(){
    int tam=0;
    cout << "digite um numero inteiro: ";
    cin >> tam;
    
    dowhile_func(tam);
    return 0;
}
