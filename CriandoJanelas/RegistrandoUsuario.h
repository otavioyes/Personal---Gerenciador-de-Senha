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
 
};
