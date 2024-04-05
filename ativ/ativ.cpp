#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definição das estruturas
struct Morada {
    string rua, cidade;
    int numero;
};

struct DataNascimento {
    int dia, mes, ano;
};

struct Agenda {
    int id;
    string nome;
    Morada morada;
    DataNascimento data;
    char status, tipo;
    union {
        int telFixo, telMovel;
        char email[100];
    } contacto;
};

// Função para inserir um novo contacto na agenda
void insrtCTT(vector<Agenda> &agenda) {
    Agenda novoContacto;

    cout << "ID: "; cin >> novoContacto.id;
    cout << "Nome: "; cin.ignore(); getline(cin, novoContacto.nome);
    cout << "Morada (rua, número, cidade): "; cin >> novoContacto.morada.rua >> novoContacto.morada.numero >> novoContacto.morada.cidade;
    cout << "Data de nascimento (Dia, Mês, Ano): "; cin >> novoContacto.data.dia >> novoContacto.data.mes >> novoContacto.data.ano;
    cout << "Contacto preferencial ([F]ixo; [M]óvel; [E]mail): "; cin >> novoContacto.tipo;

    switch (novoContacto.tipo) {
        case 'F': cout << "Telefone Fixo: "; cin >> novoContacto.contacto.telFixo; break;
        case 'M': cout << "Telefone Móvel: "; cin >> novoContacto.contacto.telMovel; break;
        case 'E': cout << "Email: "; cin.getline(novoContacto.contacto.email, 100); break;
        default: cout << "A opção não existe.\n"; 
    }

    cout << "Ativo (S/N): "; cin >> novoContacto.status;
    agenda.push_back(novoContacto);

    cout << "Contacto inserido com sucesso.\n";
}

// Função para ativar ou desativar um contacto na agenda
void AtivDesativCTT(vector<Agenda> &agenda) {
    int idContacto;
    cout << "Digite o ID do contacto: "; cin >> idContacto;

    for (auto &contacto : agenda) {
        if (contacto.id == idContacto) {
            cout << "Contacto encontrado:\n Nome: " << contacto.nome << " Status Atual: " << contacto.status << "\n";

            char novoStatus;
            cout << " (S ou N): "; cin >> novoStatus;

            if (novoStatus == 'S' || novoStatus == 'N') {
                contacto.status = novoStatus;
                cout << "Atualizado com sucesso.\n";
            } else {
                cout << "Opção inválida, selecione uma das seguintes opcoes.\n";
            }

            return;
        }
    }

    cout << "O contacto com o id " << idContacto << " não foi encontrado.\n";
}

// Função para pesquisar pelo primeiro nome e imprimir os dados das pessoas com esse nome
void pesqNom(const vector<Agenda> &agenda, const string &nomPesquisado) {
    bool encontrado = false;

    for (const auto &contacto : agenda) {
        if (contacto.nome.find(nomPesquisado) != string::npos) {
            cout << "ID: " << contacto.id << "\nNome: " << contacto.nome << "\nAtivo: " << contacto.status << "\n\n";
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Nenhum contacto encontrado com o nome " << nomPesquisado << "'.\n";
    }
}

int main() {
    vector<Agenda> agenda;
    char opcao;

    do {
        cout << "Menu Principal: \n";
        cout << "1 - Inserir um contacto \n";
        cout << "2 - Ativar ou desativar um contacto \n";
        cout << "3 - Pesquisa por nome \n";
        cout << "4 - Sair \n";
        cout << "Opcao escolhida: ";
        cin >> opcao;

        switch (opcao) {
            case '1': insrtCTT(agenda); break;
            case '2': AtivDesativCTT(agenda); break;
            case '3': {
                string nomPesquisado;
                cout << "Digite o primeiro nome para pesquisa: ";
                cin >> nomPesquisado;
                pesqNom(agenda, nomPesquisado);
                break;
            }
            case '4': cout << "A sair..... \n"; break;
            default: cout << "Não é válida a opção, selecione uma das opções disponíveis.  \n";
        }

    } while (opcao != '4');

    return 0;
}


