#pragma once
#include "Usuario.h"

#include <vector>
#include <iostream>
#include <fstream>

class RegistrandoUsuario
{

private:
	std::vector<Usuario> usuarios;



	/*push_back é um método que adiciona um novo elemento ao final do vetor, redimensionando o vetor se necessário para acomodar o novo elemento.*/
public:
	void adicionarUsuario(Usuario& usuario) 
	{
		usuarios.push_back(usuario);
	}

    void exibirUsuarios() const {
        for (const auto& usuario : usuarios) 
        {
            std::cout << "Nome: " << usuario.GetNomeCompleto() << std::endl;
            std::cout << "Email: " << usuario.GetEmail() << std::endl;
            std::cout << "Senha: " << usuario.GetSenha() << std::endl;
            std::cout << "Data de Nascimento: " << usuario.GetDataDeNascimento() << std::endl;
            std::cout << "Sexo: " << usuario.GetSexo() << std::endl;
            std::cout << "Telefone: " << usuario.GetTelefone() << std::endl;
            std::cout << "----------------------------------" << std::endl;
        }
    }


    void SalvarUsuarios(const std::string& arquivoTxt)
    {
        std::ofstream ArquivoFluxo(arquivoTxt);
        for (const auto& usuario : usuarios)
        {
            ArquivoFluxo << usuario.GetNomeCompleto() << '\n';
            ArquivoFluxo << usuario.GetEmail() << '\n';
            ArquivoFluxo << usuario.GetSenha() << '\n';
            ArquivoFluxo << usuario.GetDataDeNascimento() << '\n';
            ArquivoFluxo << usuario.GetSexo() << '\n';
            ArquivoFluxo << usuario.GetTelefone() << '\n';

        } 
        ArquivoFluxo.close();
    }

    void carregarUsuarios(const std::string& arquivoTxt) {
        std::ifstream arquivoFluxo(arquivoTxt);
        if (arquivoFluxo.is_open()) {
            std::string nome, email, senha, dataNascimento, sexo, telefone;
            while (std::getline(arquivoFluxo, nome) &&
                std::getline(arquivoFluxo, email) &&
                std::getline(arquivoFluxo, senha) &&
                std::getline(arquivoFluxo, dataNascimento) &&
                std::getline(arquivoFluxo, sexo) &&
                std::getline(arquivoFluxo, telefone)) {
            Usuario usuario(nome, email, senha, dataNascimento, sexo, telefone);
                usuarios.push_back(usuario);
            }
            arquivoFluxo.close();
        }
    }
};
