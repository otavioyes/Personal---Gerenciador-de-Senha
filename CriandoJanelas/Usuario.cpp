#include "Usuario.h"
#include <vector>
#include <iostream>


Usuario::Usuario() : NomeCompleto(""), Email(""), Senha (""), DataDeNascimento(""), Sexo(""), Telefone("") {}


//IMPLEMENTAÇÃO DO CONSTRUTOR
Usuario::Usuario(const std::string NomeCompleto, 
					const std::string Email, 
					const std::string Senha, 
					const std::string DataDeNascimento, 
					const std::string Sexo, 
					const std::string Telefone) 
	: NomeCompleto(NomeCompleto), Email(Email), Senha(Senha), DataDeNascimento(DataDeNascimento), Sexo(Sexo), Telefone(Telefone) {}



//MÉTODOS ACESSORES GET
//Deixando o retorno GET com uma linha
std::string Usuario::GetNomeCompleto() const { return NomeCompleto; }

std::string Usuario::GetEmail() const { return Email; }

std::string Usuario::GetSenha() const { return Senha; }

std::string Usuario::GetDataDeNascimento() const { return DataDeNascimento; }

std::string Usuario::GetSexo() const { return Sexo; }

std::string Usuario::GetTelefone() const { return Telefone; }

//MÉTODOS ACESSORES SET
//Deixando o retorno SET com uma única linha
void Usuario::SetNomeCompleto(const std::string& NomeCompleto) { (*this).NomeCompleto = NomeCompleto; }

void Usuario::SetEmail(const std::string& Email) { (*this).Email = Email; }

void Usuario::SetSenha(const std::string& Senha) { (*this).Senha = Senha; }

void Usuario::SetDataDeNascimento(const std::string& DataDeNascimento) { (*this).DataDeNascimento = DataDeNascimento; }

void Usuario::SetSexo(const std::string& Sexo) { (*this).Sexo = Sexo; }

void Usuario::SetTelefone(const std::string& Telefone) { (*this).Telefone = Telefone; }