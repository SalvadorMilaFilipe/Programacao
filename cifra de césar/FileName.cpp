#include <iostream>
#include <string>
#include <locale.h>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portugues");
	string frase;
	string abcedário = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i=0, deslocamento,j;
	cout << "Diz uma palavra/frase\n";
	getline(cin,frase);
    cout << "Diga o deslocamento pretendido entre cada letra\n";
	cin >> deslocamento;
	for (i = 0; i < frase.size(); i++)
	{
		if (frase[i] == ' ')
		{
			cout << " ";
		}
		else
		{
			for (j = 0; j < 26; j++)
			{
				if (frase[i] == abcedário[j])
				{
					if ((j + deslocamento) > 25)
					{
						cout << abcedário[(j + deslocamento - 26)];
					}
					else
					{
						cout << abcedário[(j + deslocamento)];
					}
				}
			}
		}
	}

}