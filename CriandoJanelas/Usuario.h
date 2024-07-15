#pragma once

/*ENTRADA DE DADOS PARA CADASTRAR UM USUARIO NO APLICATIVO:
1- Nome Completo
2- Email
3- Senha
4- Data de nascimento
5- Sexo
6- Telefone
*/

#include <string>


class Usuario
{
private:
	std::string NomeCompleto;
	std::string Email;
	std::string Senha;
	std::string DataDeNascimento;
	std::string Telefone;

	//CONSTRUTOR
public :
	Usuario(std::string NomeCompleto,
			std::string Email,
			std::string Senha,
			std::string DataDeNascimento,
			std::string Telefone);



public:
	void AdicionaUsuario(const Usuario& us);

};

