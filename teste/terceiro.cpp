#include <iostream>
using namespace std;

#define NUM_ALUNOS 100

int menu()
{
	int opcao;
	do {
		cout << "Alunos" << endl;
		cout << "1-Inserir um aluno" << endl;
		cout << "2-Apresentar número do aluno mais novo" << endl;
		cout << "0-Terminar" << endl;
		cout << "Digite a opção" << endl;
		cin >> opcao;
		}while(opcao<0 || opcao> 2);
		return opcao;
	}
	
	int n_alunos = 0, opcao;
	int vector[NUM_ALUNOS];
	
		void inserirUmAluno() {
		cout << "Indique a idade do aluno: ";
		cin >> vector[n_alunos]; // guarda a idade do aluno em n_alunos e depois incrementa o mesmo para indicar que foi adicionado um aluno
		n_alunos++; 
		} 
		
		void alunoMaisNovo() {
		int maisNovo = alunos[0]  // vai ao index 0 buscar a primeira posiçao
		cout << "O aluno mais novo tem" << maisNovo << "anos" << endl;
		}

int main(){
	
	


	do {
		opcao=menu();
		switch(opcao){
			case 1: inserirUmAluno();
			break;
			case 2: alunoMaisNovo(maisNovo);
			break;
			
		}
	} while(opcao!=0);
	return 0;
	
}
