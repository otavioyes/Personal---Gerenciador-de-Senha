#include"Usuario.h"
#include"RegistrandoUsuario.h"


int main()
{
	RegistrandoUsuario Registrado;

	Usuario Usuario01 ("Alberto Marineto",
						"albertomarineto@gmail.com",
						"@AlbertoMarineto",
						"12/01/1999",
						"Masculino",
						"(15) 12345-6789");

	Registrado.adicionarUsuario(Usuario01);

	Registrado.exibirUsuarios();

	return 0;
}