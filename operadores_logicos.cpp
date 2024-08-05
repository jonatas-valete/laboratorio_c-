#include <iostream> 
using namespace std;

void is_chevrolet(string carro, string cor){
    // comparar se marca e cor é da marca chevrolet e retornar o valor do veiculo
    if (carro == "chevrolet" && cor == "preto" || carro == "chevrolet" && cor == "branco"){
        cout << " Valor - R$ 120.000,00";
    }
}

void is_mercedes(string carro, string cor){
    // comparar se marca e cor é da marca mercedes e retornar o valor do veiculo
    if (carro == "mercedes" && cor == "preto" || carro == "mercedes" && cor == "branco"){
        cout << "Valor - R$ 350.000,00";
    }
}


int main(){
    string marca_carro, cor;
    cout << "digite a marca do carro desejado: ";
    cin >> marca_carro;
    cout << "digite a cor do carro desejado: ";
    cin >> cor;

    is_chevrolet(marca_carro, cor);
    is_mercedes(marca_carro, cor);
}
