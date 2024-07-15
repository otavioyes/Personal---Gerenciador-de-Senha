#include "Usuario.h"
#include <vector>



Usuario::Usuario(std::string NomeCompleto, std::string Email, std::string Senha, std::string DataDeNascimento, std::string Telefone)
{
	(*this).NomeCompleto = NomeCompleto;
	(*this).Email = Email;
	(*this).Senha = Senha;
	(*this).DataDeNascimento = DataDeNascimento;
	(*this).Telefone = Telefone;
}

void Usuario::AdicionaUsuario(const Usuario& usuario)
{
	usuario.push_back(suario);
}

