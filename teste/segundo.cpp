#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int nmr_inteiro;
    cout << "Insira um número inteiro positivo: ";
    cin >> nmr_inteiro;
    
    
    vector<int> list_div; // vetor criado para guardar lista de divisores
    
    for (int dividido = 1; dividido< nmr_inteiro; dividido++) { // Inicializa var dividido em 1 e como dividido, e até ter valor igual ou superior a nmr_inteiro ( tendo que no exercicio nao é possivel dividir um numero por ele proprio) incrementa dividido
        if (nmr_inteiro % dividido == 0) { // enquanto tiver operação de resto 0, mantem condição true
        	list_div.push_back(dividido);  // aloca os valores no "final da fila" no vetor até condição passar a false
		}
           
    }

   	cout << "Divisores de " << nmr_inteiro << ": ";
   	
   	for (int i = 0; i < list_div.size(); i++){ // itera os valores enquanto o tamanho do vetor ser superior ao index
   		cout << list_div[i];// vai listando todas as posições
	   }
   		
	int soma_div = 0; // var para calcular soma de todas as posições do index
	
	for (int i=0; i < list_div.size(); i++ ) { // vai calcular a soma de todos as posiçoes, ou seja, enquanto index for inferior ao tamanho da lista, vai incrementando
		soma_div = soma_div + list_div[i]; //  por ex, primeira iteração será 0+(primeiro da lista) continuando assim..
	}
	
	cout << "A soma dos divisores todos é " << soma_div << endl;
	
	bool verif_abund = (soma_div > nmr_inteiro); // verifica se a soma dos divisores e superior ao proprio numero, para assim determinar se e um numero abundante ou nao
	
	if (verif_abund = true ){
	
        cout << "Número Abundante" << endl;
    } else {
        cout << "Não é um número abundante" << endl;
    }
	
	
    
    

    return 0;
}




