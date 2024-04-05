
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> nomes;

    for (int i = 0; i <20; i++ ){ // este loop vai rodar 20x, nestas 20x, vai pedir ao user para inserir os nomes
		
        string nome; // declara a string para guardar o nome atual
        cout << "Insira o nome " << i << endl; // vai dar output de "Insira o nome" e a frente aparece o número do index que está a ser inserido
        getline(cin, nome); // pede input ao user, da get no nome e guarda o sobre nome 
        
        
        if (nome.length() > 50) {
        	cout << "O nome apenas pode ter 50 caracteres" << endl;
        	
        	
        nomes.push_back(nome); // junta o nome a lista usando pushback
    	}
	}
}
