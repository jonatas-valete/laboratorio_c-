#include <iostream>

using namespace std;

void while_func(int tam){
    // calcular fatorial
    int cont=0;
    int soma=0;
    
    while (cont <= tam){
        soma+=cont;
        cont++;
    }
    cout << "resultado da soma - " << soma << endl;
}


int main(){
    int tam=0;
    cout << "digite um numero inteiro: ";
    cin >> tam;
    
    while_func(tam);
    return 0;
}
