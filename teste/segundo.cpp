#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int nmr_inteiro;
    cout << "Insira um n�mero inteiro positivo: ";
    cin >> nmr_inteiro;
    
    
    vector<int> list_div; // vetor criado para guardar lista de divisores
    
    for (int dividido = 1; dividido< nmr_inteiro; dividido++) { // Inicializa var dividido em 1 e como dividido, e at� ter valor igual ou superior a nmr_inteiro ( tendo que no exercicio nao � possivel dividir um numero por ele proprio) incrementa dividido
        if (nmr_inteiro % dividido == 0) { // enquanto tiver opera��o de resto 0, mantem condi��o true
        	list_div.push_back(dividido);  // aloca os valores no "final da fila" no vetor at� condi��o passar a false
		}
           
    }

   	cout << "Divisores de " << nmr_inteiro << ": ";
   	
   	for (int i = 0; i < list_div.size(); i++){ // itera os valores enquanto o tamanho do vetor ser superior ao index
   		cout << list_div[i];// vai listando todas as posi��es
	   }
   		
	int soma_div = 0; // var para calcular soma de todas as posi��es do index
	
	for (int i=0; i < list_div.size(); i++ ) { // vai calcular a soma de todos as posi�oes, ou seja, enquanto index for inferior ao tamanho da lista, vai incrementando
		soma_div = soma_div + list_div[i]; //  por ex, primeira itera��o ser� 0+(primeiro da lista) continuando assim..
	}
	
	cout << "A soma dos divisores todos � " << soma_div << endl;
	
	bool verif_abund = (soma_div > nmr_inteiro); // verifica se a soma dos divisores e superior ao proprio numero, para assim determinar se e um numero abundante ou nao
	
	if (verif_abund = true ){
	
        cout << "N�mero Abundante" << endl;
    } else {
        cout << "N�o � um n�mero abundante" << endl;
    }
	
	
    
    

    return 0;
}




