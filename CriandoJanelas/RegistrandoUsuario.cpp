#include "RegistrandoUsuario.h"


    /*push_back é um método que adiciona um novo elemento ao final do vetor, redimensionando o vetor se necessário para acomodar o novo elemento.*/

void RegistrandoUsuario::AdicionaUsuario(const Usuario& usuario) 
{
    usuarios.push_back(usuario);
}

void RegistrandoUsuario::ExibirUsuarios() const {
        for (const auto& usuario : usuarios)
        {
            std::cout << "\t\t\tINSIRA SEUS DADOS\t\t\t\n";
            std::cout << "\t\t\tNome: " << usuario.GetNomeCompleto() << std::endl;
            std::cout << "\t\t\tEmail: " << usuario.GetEmail() << std::endl;
            std::cout << "\t\t\tSenha: " << usuario.GetSenha() << std::endl;
            std::cout << "\t\t\tData de Nascimento: " << usuario.GetDataDeNascimento() << std::endl;
            std::cout << "\t\t\tSexo: " << usuario.GetSexo() << std::endl;
            std::cout << "\t\t\tTelefone: " << usuario.GetTelefone() << std::endl;
            std::cout << std::endl;
            std::cout << "-----------------------------------------------------" << std::endl;
        }
}


void RegistrandoUsuario::SalvarUsuarios(const std::string& arquivoTxt) {
        std::ofstream ArquivoFluxo(arquivoTxt);
        for (const auto& usuario : usuarios)
        {
            ArquivoFluxo << usuario.GetNomeCompleto() << '\n';
            ArquivoFluxo << usuario.GetEmail() << '\n';
            ArquivoFluxo << usuario.GetSenha() << '\n';
            ArquivoFluxo << usuario.GetDataDeNascimento() << '\n';
            ArquivoFluxo << usuario.GetSexo() << '\n';
            ArquivoFluxo << usuario.GetTelefone() << '\n';
            ArquivoFluxo << '\n';

        }
        ArquivoFluxo.close();
}

void RegistrandoUsuario::CarregarUsuarios(const std::string& arquivoTxt) {
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
};