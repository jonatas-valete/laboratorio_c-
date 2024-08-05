#include <iostream>

using namespace std;

void for_func(int tam){
    // calcular fatorial
    int soma=0;
    for (int j=1; j<=tam; j+=1){
        soma+=j;
    }
    cout << "resultado da soma - " << soma << endl;
}


int main(){
    int tam=0;
    cout << "digite um numero inteiro: ";
    cin >> tam;
    
    dowhile_func(tam);
    return 0;
}
