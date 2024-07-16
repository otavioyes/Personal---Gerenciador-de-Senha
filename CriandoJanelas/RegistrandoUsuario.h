#pragma once
#include "Usuario.h"

#include <vector>
#include <iostream>

class RegistrandoUsuario
{

private:
	std::vector<Usuario> usuarios;



	/*push_back é um método que adiciona um novo elemento ao final do vetor, redimensionando o vetor se necessário para acomodar o novo elemento.*/
public:
	void adicionarUsuario(const Usuario& usuario) 
	{
		usuarios.push_back(usuario);
	}

    void exibirUsuarios() {
        for (auto& usuario : usuarios) {
            std::cout << "Nome: " << usuario.GetNomeCompleto() << std::endl;
            std::cout << "Email: " << usuario.GetEmail() << std::endl;
            std::cout << "Data de Nascimento: " << usuario.GetDataDeNascimento() << std::endl;
            std::cout << "Sexo: " << usuario.GetSexo() << std::endl;
            std::cout << "Telefone: " << usuario.GetTelefone() << std::endl;
            std::cout << "----------------------------------" << std::endl;
        }
    }

};
