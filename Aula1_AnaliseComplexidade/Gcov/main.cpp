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
			cout << "Tudo que temos de decidir é o que fazer com o tempo que nos é dado." << endl;
			break;
		case 'b':
			cout << "Ações não valerão menos porque não foram elogiadas." << endl;
			break;
		case 'q':
			break;
		default:
			cout << "Comando não identificado" << endl;
			break;
		}
	}
	while(comando != 'q');
	return 0;
}
