#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	string nome;
	ofstream Escrita("nomes.txt");
	cout << "Qual é o seu nome?\n";
	getline(cin, nome);
	Escrita << nome;
	Escrita.close();

	ifstream Leitura("nomes.txt");
	while (getline(Leitura, nome))
	{
		cout << nome;
	}
	Leitura.close();
}