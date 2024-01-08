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
		cout << "Diga um número\n";
		cin >> n;
		if (nr < n)
		{
			cout << "O número que escreveu é maior do que o número que tem que acertar\n";
		}
		else
		{
			if (nr > n)
			{
				cout << "O número que escreveu é menor do que o número que tem que acertar\n";
			}
		}

	} while (nr != n);
	cout << "Parabéns!!! O número era " << nr << ".\n";
}