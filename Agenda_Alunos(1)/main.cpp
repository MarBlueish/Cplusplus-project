#include <iostream>
#include <string>
using namespace std;


struct No{
		int nmrAluno;
		string nomAluno;
		float notAluno;
};





int main() {

	
	
	
	int opcao;
	
	do{
	
		cout << "Escolha uma das seguintes opções/n";
		cout << "Prima 1 para inserir um aluno(número, nome e nota)/n";
		cout << "Prima 2 para listar todos os alunos/n";
		cout << "Prima 3 para calcular a média da turma /n";
		cout << "Prima 4 para sair /n";
		cin >> opcao;
	
		switch(opcao){
			case 1:
				//inserirAlunos()
				break;
			case 2:
				//listarAlunos()
				break;
			case 3:
				//cout << "A média de toda a turma é " << MediaTurma()
				break;
			case 4:
				cout << "A terminar o programa";
				break;
			default:
				cout << "Opção inválida, Selecione uma das opções selecionadas\n";
		}
				
	} while (opcao != 4);
		
	
	
	

	return 0;
}
