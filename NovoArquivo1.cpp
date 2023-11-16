#include <iostream>
#include <locale>
#include <vector>
#include <cstring>
#include <fstream>


using namespace std;

struct Pessoa {
    int cpf;
    string nome;
    int data_nasc;
    string ender;
    string sexo;
    int tel;
    string email;
};

struct Associado {
	int cod;
	int cpf;
	int data_assoc;
	string tipo_soc;
	double mensalidade;
};

struct Dependente {
    int codigo;
    int codExterno;
    string cpf_associado;
    string nome;
    string data_nasc;
    string sexo;
};

struct Visitante {
    int codigo;
    string cpf;
    int codigo_associado;
    string nome;
    string data_nasc;
    string sexo;
    string data_visita_inicial;
    string data_visita_final;
};

vector<Pessoa> pessoas;
vector<Associado> associados;
vector<Dependente> dependentes;
vector<Visitante> visitantes;

void cadastrarAssociado(const Pessoa& pessoa){
	
}

void cadastrarDependente(const Pessoa& pessoa){
	
}

void cadastrarVisitante(const Pessoa& pessoa){
	
}

void cadastrarPessoa(){
	
	Pessoa pessoa;
	
	cout << "Qual o CPF?: ";
	cin >> pessoa.cpf;
	
	 for (const Pessoa& p : pessoas) {
        if (p.cpf == pessoa.cpf) {
            cout << "Pessoa já cadastrada!" << endl;
            return;
        }
    }
	
	cout << "Qual o nome: ";cin>>pessoa.nome;
	cout << "Qual a data de nascimento: ";cin>>pessoa.data_nasc;
	cout << "Qual o Endereço: ";cin>>pessoa.ender;
	cout << "Qual o Sexo M/F: ";cin>>pessoa.sexo;
	cout << "Qual o telefone: ";cin>>pessoa.tel;
	cout << "Qual o email: ";cin>>pessoa.email;
	cout <<endl;
	cout << "Qual o tipo de pessoa?\n";
	cout << endl;
	cout << "1-Associado\n2-Dependente\n3-Visitante\n\n";
	
	int op;
	cout << "Opçao: ";cin >> op;
	
	switch (op){
        case 1:
            cadastrarAssociado(pessoa);
            break;
        case 2:
            cadastrarDependente(pessoa);
            break;
        case 3:
            cadastrarVisitante(pessoa);
            break;
        default:
            cout << "Escolha invalida!.\n\n";
	}
}


void relatorioDependenteAssociado(){
	
}

void relatorioVisitaAssociados(){
	
}

int main (){
	setlocale(LC_ALL, "portuguese");
	int op;
	
	while(true)
	{
		/*MENU PRINCIPAR*/
        cout << "MENU PRINCIPAL!!"<<endl;
		cout << "1-Cadastro uma pessoa"<<endl;
        cout << "2-Relatório de dependentes/associados"<<endl;
        cout << "3-Relátorio de visitas por associado"<<endl;
        cout << "4-Sair"<<endl;
        cout << "Escolha sua opção: ";
        cin>>op;
        cout << endl;
        
        switch (op){
        	
        	case 1:
        		cadastrarPessoa();
        		break;
			
			case 2:
				relatorioDependenteAssociado();
				break;
			
			case 3:
				relatorioVisitaAssociados();
				break;
			
			case 4:
				cout << "Fechando O Programa, Obrigado!\n\n";
				return 0;
				break;
			
			default:
				cout << "Opcão Invalida!\n\n";
				break;
		}
	}
}
