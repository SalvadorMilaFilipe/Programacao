#include <iostream>
#include <math.h>

#include <iostream>
#include <math.h>

void main()
{
	int dias, pessoas;
	float preco, valor, decimas;
	do { // Os dados em quest�o
		std::cin >> preco;// O pre�o
		std::cin >> dias;// Dias de marca��o com anteced�ncia
		std::cin >> pessoas;// N�mero de pessoas que v�o
	} while (preco < 100 && preco >100000);
	preco = preco / 100;
	preco = preco - preco * 0.25;
	decimas = preco - trunc(preco);
	if (decimas > 0.5) // Processo de arredondamento das d�cimas
	{
		valor = trunc(preco) + 1;
	}
	else
	{
		valor = trunc(preco) + 0.5;
	}
	preco = valor;


	if ((dias > 4) && (dias < 9))//desconto de 5 dias a 8 dias desconto = 40%
	{
		preco = preco - preco * 0.4;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}
		preco = valor;

	}
	else if (dias > 8) // Desconto de 8 dias ou + desconto = 65%
	{
		preco = preco - preco * 0.65;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}
		preco = valor;
	}


	if (pessoas > 3) // desconto do grupo desconto = 50%
	{
		preco = preco - preco * 0.5;
		decimas = preco - trunc(preco);
		if (decimas > 0.5)
		{
			valor = trunc(preco) + 1;
		}
		else
		{
			valor = trunc(preco) + 0.5;
		}

	}

	preco = valor * 100;//Pre�o Final
	std::cout << preco;

}