/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void multiplicacao(float a, float b){
    float resultado=a*b;
    cout << resultado << endl;   
}

void divisao(float a=0, float b=0){
    float resultado=a/b;
    cout << resultado << endl;
}

void soma(float a=0, float b=0){
    float resultado=a+b;
    cout << resultado << endl;
}

void subtracao(float a=0, float b=0){
    float resultado=0;
    if (a > b){
        resultado=a-b;
    }else{
        resultado=b-a;
    }
    cout << resultado << endl;
} 

int main(){
    
    float a, b;
    char operador;
    cout << "entre com uma operação: \n" << endl;
    cin >> operador;
    if (operador == '*'){
       cin >> a;
       cin >> b; 
       multiplicacao(a, b);
    }else if (operador == '/'){
        cin >> a;
        cin >> b;
        divisao(a, b);
    }else if (operador == '+'){
        cin >> a;
        cin >> b;
        soma(a, b);
    }else if (operador == '-'){
        cin >> a;
        cin >> b;
        subtracao(a, b);
    }else{
        cout << "Operação não existente. tente novamente.
    return 0;
}
