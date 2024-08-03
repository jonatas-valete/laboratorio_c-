#include <iostream> 
using namespace std;

void is_chevrolet(string carro, string cor){
    if (carro == "chevrolet" && cor == "preto" || carro == "chevrolet" && cor == "branco"){
        cout << "R$ 120.000,00";
    }
}

void is_mercedes(string carro, string cor){
    if (carro == "mercedes" && cor == "preto" || carro == "mercedes" && cor == "branco"){
        cout << "R$ 350.000,00";
    }
}


int main(){
    string marca_carro, cor;
    cout << "digite a marca do carro desejado: " << endl;
    cin >> marca_carro;
    cout << "digite a cor do carro desejado: ";
    cin >> cor;

    is_chevrolet(marca_carro, cor);
    is_mercedes(marca_carro, cor);
}