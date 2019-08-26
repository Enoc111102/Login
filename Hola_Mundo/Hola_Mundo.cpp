#include <iostream>
#include <string>
using namespace std;

int main()
{
	string usuario;
	string password;
	cout << "Ingrese su nombreusuario: ";
	cin >> usuario;
	cout << "Ingrese su password: ";
	cin >> password;

	if (usuario == "juancho" && password == "123tamarindo")
	{
		cout << "Bienvenido al Sistema Super Secreto";
	}
	else
	{
		cout << "Error del sistema";
	};
	return 0;
}

