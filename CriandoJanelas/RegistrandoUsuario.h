#pragma once
#include "Usuario.h"

#include <vector>
#include <iostream>
#include <fstream>

class RegistrandoUsuario
{

private:
	std::vector<Usuario> usuarios;


public:
    void AdicionaUsuario(const Usuario& usuario);
    void ExibirUsuarios() const;
    void CarregarUsuarios(const std::string& arquivoTxt);
    void SalvarUsuarios(const std::string& arquivoTxt);
 
    bool ValidaEmail(const std::string& email) const;
    bool ValidaSenha(const std::string& senha) const;
    bool ValidarDataDeNascimento(const std::string& DataDeNascimento) const;
    bool ValidaSexo(const std::string& Sexo);
    bool ValidarTelefone(const std::string& Telefone) const;
};
