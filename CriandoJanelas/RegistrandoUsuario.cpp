#include "RegistrandoUsuario.h"

#include<regex>
#include<ctime>

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

            std::cout << "\t\t\tEmail: " << usuario.GetEmail() << " - " << (ValidaEmail(usuario.GetEmail()) ? "Email válido" : "Email inválido") << std::endl;
            std::cout << "\t\t\tSenha: " << usuario.GetSenha() << " - " << (ValidaSenha(usuario.GetSenha()) ? "Senha válida" : "Senha inválida") << std::endl;
            
            std::cout << "\t\t\tData de Nascimento: " << usuario.GetDataDeNascimento() << 
                " - " << (ValidarDataDeNascimento(usuario.GetDataDeNascimento()) ? "Data de nascimento válida" : "Data de nascimento inválida") << std::endl;
           
            std::cout << "\t\t\tSexo: " << usuario.GetSexo() << std::endl;
            std::cout << "\t\t\tTelefone: " << usuario.GetTelefone() << 
                " - " << (ValidarTelefone(usuario.GetTelefone()) ? "Telefone válido" : "Telefone inválido") << std::endl;
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

//implementando validacao do email
bool RegistrandoUsuario::ValidaEmail(const std::string& email) const 
{
    const std::regex modeloPadrao(R"((\w+)(\.{1})?(\w*)@(\w+)(\.(\w+))+\.\w{2,3})");
    if (std::regex_match(email, modeloPadrao)) {
        return "Email valido ";
    } else { return "Email invalido "; }
        
} 


bool RegistrandoUsuario::ValidaSenha(const std::string& senha) const 
{
    if (senha.length() < 8) return false;

    bool temMaiscula = false, temMinuscula = false, temNumero = false, temCaracterEspecial = false;
    for (char C : senha)
    {
        if (isupper(C)) temMaiscula = true;
        if (islower(C)) temMinuscula = true;
        if (isdigit(C)) temNumero = true;
        if (ispunct(C)) temCaracterEspecial = true;
    }
    return temMaiscula && temMinuscula && temNumero && temCaracterEspecial;
}


bool RegistrandoUsuario::ValidarDataDeNascimento(const std::string& DataDeNascimento) const
{
    const std::regex dataNascimentoEscritaPadrao(R"(\d{2} / \m{2} / \a{4})");
    if (!std::regex_match(DataDeNascimento, dataNascimentoEscritaPadrao)) return false;

    //verifica se a data é valida
    int dia = std::stoi(DataDeNascimento.substr(0, 2));
    int mes = std::stoi(DataDeNascimento.substr(3, 2));
    int ano = std::stoi(DataDeNascimento.substr(6, 4));

    if (dia < 1 || dia > 31 || mes > 12 || mes < 1 || ano > 2024 || ano < 1900) return false;

    //verifica se a pessoa é maior de idade

    std::time_t tempo = std::time(0);

    std::tm agora;
        
    localtime_s(&agora, &tempo);
    int anoAtual = 1900 + agora.tm_year;
    int mesAtual = 1 + agora.tm_mon;
    int diaAtual = 1 + agora.tm_mday;

    int idade = anoAtual - ano;
    if (mesAtual < mes || mesAtual == mes && diaAtual < dia) idade--;

    if (idade >= 18) {
        return "Data de nascimento válida";
    }
    else {
        return "Usuario deve ser maior de idade ";
    }
}



bool RegistrandoUsuario::ValidaSexo(const std::string& Sexo)
{
   return Sexo == "Masculino " || Sexo ==  "Feminino ";
}


bool RegistrandoUsuario::ValidarTelefone(const std::string& Telefone) const 
{
    const std::regex modeloTelefone(R"(\(\d{2}\)\d{4,5}-\d{4})");
    if (std::regex_match(Telefone, modeloTelefone)) {
        return "Telefone válido ";
    } else { return "Telefone inválido "; }
}


//implementando validacao da senha
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