/*ENTRADA DE DADOS PARA CADASTRAR UM USUARIO NO APLICATIVO:
1- Nome Completo
2- Email
3- Senha
4- Data de nascimento
5- Sexo
6- Telefone
*/

#pragma once
#include <string>
#include <vector>


class Usuario
{
private:
	std::string NomeCompleto;
	std::string Email;
	std::string Senha;
	std::string DataDeNascimento;
	std::string Sexo;
	std::string Telefone;

	//CONSTRUTOR
public :
	Usuario();
	Usuario(std::string NomeCompleto,
			std::string Email,
			std::string Senha,
			std::string DataDeNascimento,
			std::string Sexo,
			std::string Telefone);
	
	//Usuario(std::string NomeCompleto, std::string Email, std::string Senha, std::string DataDeNascimento, std::string Telefone);

	std::string GetNomeCompleto() const;
	std::string GetEmail() const;
	std::string GetSenha() const;
	std::string GetDataDeNascimento() const;
	std::string GetSexo() const;
	std::string GetTelefone() const;

	void SetNomeCompleto(std::string NomeCompleto);
	void SetEmail(std::string Email);
	void SetSenha(std::string Senha);
	void SetDataDeNascimento(std::string DataDeNascimento);
	void SetSexo(std::string Sexo);
	void SetTelefone(std::string Telefone);
	
};

