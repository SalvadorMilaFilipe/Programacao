#include <iostream>
#include <string>

void main()
{
	int i,j=0,vermelho,azul,respostaadar[5],resposta[5];
	using namespace std;
	srand(time(0));
	for (i = 0; i < 5; i++)
	{
       respostaadar[i] = rand() % 2 + 1;
	   cout << respostaadar[i];
	}
    
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < 5; i++)
			{
                cout << "diga uma sequência de numeros entre 1 e 2\n";
			    cin >> resposta[i];
			}
			
			if (respostaadar[i] == resposta[i])
		    {
			cout << "Parabéns!!! Em " << j+1 << " jogada(s) acertou todos os numeros. Numeros pedidos: " << respostaadar[i] << "\n";
			i = 4;
		    }
			else if (respostaadar[i] != resposta[i] && j == 10)
			{
				cout << "Em" << j+1 << "jogadas não acertou nenhuma vez. Numeros pedidos: " << respostaadar[i] << "\n";
			}
			else
			{
				j = j + 1;
			}
		}
		
	
	
}