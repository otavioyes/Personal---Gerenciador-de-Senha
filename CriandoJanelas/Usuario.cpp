#include "Usuario.h"
#include <vector>
#include <iostream>


Usuario::Usuario()
{
	NomeCompleto = "";
	Email = "";
	Senha = "";
	DataDeNascimento = "";
	Sexo = "";
	Telefone = "";
}

//IMPLEMENTAÇÃO DO CONSTRUTOR
Usuario::Usuario(std::string NomeCompleto, std::string Email, std::string Senha, std::string DataDeNascimento, std::string Sexo, std::string Telefone)
{
	NomeCompleto = NomeCompleto;
	Email = Email;
	Senha = Senha;
	DataDeNascimento = DataDeNascimento;
	Sexo = Sexo;
	Telefone = Telefone;
}


//MÉTODOS ACESSORES GET
std::string Usuario::GetNomeCompleto() const
{
	return NomeCompleto;
}

std::string Usuario::GetEmail() const
{
	return Email;
}

std::string Usuario::GetSenha() const
{
	return Senha;
}

std::string Usuario::GetDataDeNascimento() const
{
	return DataDeNascimento;
}

std::string Usuario::GetSexo() const
{
	return Sexo;
}

std::string Usuario::GetTelefone() const
{
	return Telefone;
}

//MÉTODOS ACESSORES SET
void Usuario::SetNomeCompleto(std::string NomeCompleto)
{
	(*this).NomeCompleto = NomeCompleto;
}

void Usuario::SetEmail(std::string Email)
{
	(*this).Email = Email;
}

void Usuario::SetSenha(std::string Senha)
{
	(*this).Senha = Senha;
}

void Usuario::SetDataDeNascimento(std::string DataDeNascimento)
{
	(*this).DataDeNascimento = DataDeNascimento;
}

void Usuario::SetSexo(std::string Sexo)
{
	(*this).Sexo = Sexo;
}

void Usuario::SetTelefone(std::string Telefone)
{
	(*this).Telefone = Telefone;
}