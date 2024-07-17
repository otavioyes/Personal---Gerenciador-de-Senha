#include"Usuario.h"
#include"RegistrandoUsuario.h"
#include "CadastroUsuario.h"


int main()
{
	RegistrandoUsuario cadastrado;

	//Carregar usuarios salvos previamente
	cadastrado.carregarUsuarios("usuarios.txt");


	//Aqui adiciona novo usuario
	CadastroUsuario(cadastrado);

	//Exibir todos os usuarios
	cadastrado.exibirUsuarios();

	//Salvar usuario no arquivo usuarios.txt
	cadastrado.SalvarUsuarios("usuarios.txt");

	return 0;
}