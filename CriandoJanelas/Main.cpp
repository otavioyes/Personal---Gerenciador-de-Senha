#include"Usuario.h"
#include"RegistrandoUsuario.h"
#include "CadastroUsuario.h"


int main()
{
	RegistrandoUsuario cadastrado;

	std::string nome, email, senha, dataNascimento, sexo, telefone;

	std::cout << "Nome completo: ";
	std::getline(std::cin, nome);
	
	std::cout << "Email: ";
	std::getline(std::cin, email);
	std::cout << (cadastrado.ValidaEmail(email) ? "Email válido" : "Email inválido") << '\n';

	std::cout << "Senha: ";
	std::getline(std::cin, senha);
	std::cout << (cadastrado.ValidaSenha(senha) ? "Senha vállida" : "Senha inválida") << '\n';

	std::cout << "Data de nascimento: ";
	std::getline(std::cin, dataNascimento);
	std::cout << (cadastrado.ValidarDataDeNascimento(dataNascimento)
		? "Data de nascimento válida" : "Data de nascimento inválida");

	std::cout << "Sexo: ";
	std::getline(std::cin, sexo);

	std::cout << "Telefone: ";
	std::getline(std::cin, telefone);
	std::cout << (cadastrado.ValidarTelefone(telefone) ? "Telefone válido" : "Telefone inválido") << '\n';


	//Carregar usuarios salvos previamente
	cadastrado.CarregarUsuarios("usuarios.txt");


	//Aqui adiciona novo usuario
	CadastroUsuario(cadastrado);

	//Exibir todos os usuarios
	cadastrado.ExibirUsuarios();

	//Salvar usuario no arquivo usuarios.txt
	cadastrado.SalvarUsuarios("usuarios.txt");

	return 0;
}