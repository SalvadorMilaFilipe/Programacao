#include<iostream>
#include<locale.h>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int nr, n, max;

	max = 2147483647;

	srand(time(0));

	nr= rand() % max + 1;
	do
	{
		cout << "Diga um n�mero\n";
		cin >> n;
		if (nr < n)
		{
			cout << "O n�mero que escreveu � maior do que o n�mero que tem que acertar\n";
		}
		else
		{
			if (nr > n)
			{
				cout << "O n�mero que escreveu � menor do que o n�mero que tem que acertar\n";
			}
		}

	} while (nr != n);
	cout << "Parab�ns!!! O n�mero era " << nr << ".\n";
}