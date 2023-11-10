#include <iostream>
#include <locale>
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

void cadastrarAssociado(){
	Associado assoc;
	cout << "Qual o CPF DO Associado?: ";cin>>assoc.cpf;cout<<endl;
	cout << "Qual a data da associaçao?: ";cin>>assoc.data_assoc;cout<<endl;
	cout << "Qual o sócio? Proprietario Ou Contribuente?";cin>>assoc.tipo_soc;cout<<endl;
	
	for () {
		
	}
	
}



int main (){
	setlocale(LC_ALL, "portuguese");
	int op;
	
	while(true)
	{
		/*MENU PRINCIPAR*/
        cout << "MENU PRINCIPAL!!"<<endl;
        cout << "1-Cadastro e manutenção de dados de associados"<<endl;
        cout << "2-Cadastro e manutenção de dados dependentes"<<endl;
        cout << "3-Cadastro e manutenção de dados visitante"<<endl;
        cout << "4-Relatório de dependentes/associados"<<endl;
        cout << "5-Relátorio de visitas por associado"<<endl;
        cout << "6-Sair"<<endl;
        cout << "Escolha sua opção: ";
        cin>>op;
        cout << endl;
        
        switch (op){
        	
			case 1:
				cadastrarAssociados();
				break;
			
			case 2:
				cadastrarDependentes();
				break;
			
			case 3:
				cadastrarVisitantes();
				break;
			
			case 4:
				relatorioDependenteAssociado();
				break;
			
			case 5:
				relatorioVisitaAssociados();
				break;
			
			case 6:
				cout << "Fechando O Programa, Obrigado!\n\n";
				return 0;
				break;
			
			default:
				cout << "Opcão Invalida!\n\n";
				break;
		}
	}
}