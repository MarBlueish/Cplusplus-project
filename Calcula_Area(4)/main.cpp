#include <iostream>
using namespace std;

class Retangulo {
private:
    int base;
    int altura;
public:
    Retangulo(int b, int a){
        base = b;
        altura = a;
    }
};


int main() {


    cout << "Calcula o valor da área do retangulo." << endl;
    cout << "Introduz o valor da base: ";
    cin >> b;
    cout << "Insere o valor da altura: ";
    cin >> a;

    retangulo ret1(b,a);



    return 0;
}
