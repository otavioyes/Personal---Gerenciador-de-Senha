#include"Usuario.h"
#include"RegistrandoUsuario.h"
#include "CadastroUsuario.h"


int main()
{
	RegistrandoUsuario cadastrado;


	CadastroUsuario(cadastrado);

	
	cadastrado.exibirUsuarios();

	return 0;
}