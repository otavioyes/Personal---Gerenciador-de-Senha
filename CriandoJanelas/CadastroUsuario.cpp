#include "RegistrandoUsuario.h"
#include "Usuario.h"
#include "CadastroUsuario.h"

void CadastroUsuario(RegistrandoUsuario& registro)
{
	std::string Nome;
	std::string Email;
	std::string Senha;
	std::string Nascimento;
	std::string Sexo;
	std::string Telefone;


	std::cout << "Nome completo: ";
	std::getline(std::cin, Nome);
	
	std::cout << "Email: ";
	std::getline(std::cin, Email);

	std::cout << "Senha: ";
	std::getline(std::cin, Senha);

	std::cout << "Data de nascimento: ";
	std::getline(std::cin, Nascimento);

	std::cout << "Sexo: ";
	std::getline(std::cin, Sexo);

	std::cout << "Telefone: ";
	std::getline(std::cin, Telefone);

	Usuario usuario(Nome, Email, Senha, Nascimento, Sexo, Telefone);
	registro.AdicionaUsuario(usuario);


}