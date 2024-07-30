#include <iostream>

using namespace std;

int estcond(float valor=0){
    if (valor < 2000){
        cout << "salario baixo" << endl;
    } else if (valor < 3000){
        cout << "salario médio" << endl;
    } else if (valor > 5000){
        cout << "salario bom" << endl;
    }
    return 0;
}

int main(){
    float valor=0;
    cout << "digite um valor\n";
    cin >> valor;
    estcond(valor);
    return 0;
    
}
