#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char comando = ' ';

	do
	{
		cin >> comando;

		switch(comando)
		{
		case 'a':
			cout << "Tudo que temos de decidir � o que fazer com o tempo que nos � dado." << endl;
			break;
		case 'b':
			cout << "A��es n�o valer�o menos porque n�o foram elogiadas." << endl;
			break;
		case 'q':
			break;
		default:
			cout << "Comando n�o identificado" << endl;
			break;
		}
	}
	while(comando != 'q');
	return 0;
}
