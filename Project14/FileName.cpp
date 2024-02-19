#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	string frase;
	setlocale(LC_ALL, "Portuguese");
	int i,contador=1,repetidor=1;
	
	do
	{
		cout << "Escreve a fórmula e termina o ponto final\n";
		cin >> frase;
		if (frase.size() < 1 || frase.size() > 10)
		{
			cout << "Passas-te do limite. Repete denovo.\n";
			repetidor = 0;
		}
	} while (repetidor != 0);
	do
	{
		for (i = 0; i < frase.size(); i++)
		{


			if (isupper(frase[i]))
			{

				if (contador == 0)
				{
					cout << " 1";
				}
				contador = 0;
				cout << "\n";

			}
			if (isdigit(frase[i]) && contador == 0)
			{
				cout << " ";
				contador = contador + 1;

			}
			if (frase[i] == '.')
			{
				cout << " 1";
			}
			else
			{
				cout << frase[i] ;
				
			}
		}
	    repetidor = 0;
	} while (repetidor == 1);
	
}