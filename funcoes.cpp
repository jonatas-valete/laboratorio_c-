#include <iostream>

using namespace std;

void funcTexto(string texto){
    cout << texto << endl;
    //return 0;
}


int soma(int a, int b){
    int s=0;
    s = a+b;
    cout << s << endl;
}

int main(){
    string texto="Minha primeira função em c++";
    
    funcTexto(texto);
    
    int a=30, b=2;
    soma(a,b);
    return 0;
}
