#include <iostream>

using namespace std;

void multiplicacao(float a, float b){
    float resultado=a*b;
    cout << "Resultado: " << resultado << endl;   
}

void divisao(float a=0, float b=0){
    float resultado=a/b;
    cout << "Resultado: " << resultado << endl;
}

void soma(float a=0, float b=0){
    float resultado=a+b;
    cout << "Resultado: " << resultado << endl;
}

void subtracao(float a=0, float b=0){
    float resultado=0;
    if (a > b){
        resultado=a-b;
    }else{
        resultado=b-a;
    }
    cout << "Resultado: " << resultado << endl;
}


int main(){
    float a, b;
    char operador;
    cout << "entre com uma operação: ";
    cin >> operador;
    if (operador == '*'){
       cout << "digite o primeiro valor: ";
       cin >> a;
       cout << "digite o segundo valor: ";
       cin >> b; 
       multiplicacao(a, b);
    }else if (operador == '/'){
        cout << "digite o primeiro valor: ";
        cin >> a;
        cout << "digite o segundo valor: ";
        cin >> b;
        divisao(a, b);
    }else if (operador == '+'){
        cout << "digite o primeiro valor: ";
        cin >> a;
        cout << "digite o segundo valor: ";
        cin >> b;
        soma(a, b);
    }else if (operador == '-'){
        cout << "digite o primeiro valor: ";
        cin >> a;
        cout << "digite o segundo valor: ";
        cin >> b;
        subtracao(a, b);
    }else{
        cout << "Operação não existente. tente novamente." << endl;
    return 0;
    }
}
