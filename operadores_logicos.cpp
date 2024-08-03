#include <iostream>

using namespace std;

// Operadores Lógicos: E: &&, ou:||, Não: !
/* As condições devem ser feitas dentro do parentese de cada if por exemplo. */

void is_chevrolet(string carro, string cor){
         if (carro == "chevrolet" && cor == "preto" || cor == "branco"){
             cout << "Valor R$ 120.000,00" << endl;
         }
}

void is_mercedes(string carro, string cor){
         if (carro == "mercedes" && cor == "preto" || cor == "branco"){
             cout << "Valor R$ 300.000,00" << endl;
         }   
}



int main(){
    string carro, cor;

    cout << "digite a marca do carro: " << endl;
    cin >> carro;

    cout << "digite a cor do carro: " << endl;
    cin >> cor;

    is_chevrolet(carro, cor);
    is_mercedes(carro, cor);
    return 0;
}