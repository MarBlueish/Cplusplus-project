#include <iostream>
#include <locale.h>
#include <stdexcept>



using namespace std;

double a;
double b;
double c;
double notaMedia = 0;




void media(){
    notaMedia=((a+b+c)/3);
};



int main() {
    setlocale(LC_ALL, "Portuguese");

    try {
        cout << "Vamos calcular a media das disciplinas" << endl;
        cout << "Insira a nota de Matemática" << endl;
        cin >> a;
        cout << "Insira a nota de Inglês" << endl;
        cin >> b;
        cout << "Insira a nota de História" << endl;
        cin >> c;
        media();
        cout << "O valor da nota final é " << notaMedia;





    return 0;
}
