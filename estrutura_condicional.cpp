#include <iostream>

using namespace std;

// Operadores Lógicos: E: &&, ou:||, Não: !
/* As condições devem ser feitas dentro do parentese de cada if por exemplo. */

int main(){
    string carro, cor;

    cout << "digite a marca do carro: " << endl;
    cin >> carro;

    cout << "digite a cor do carro: " << endl;
    cin >> cor;

    if (carro == "chevrolet" && cor == "preto"){
        cout << "Valor R$ 120.000,00" << endl;
    } else{
         cout << "carro nao encontrado\n";
    }
    return 0;
}