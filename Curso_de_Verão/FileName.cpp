#include <iostream>
#include <math.h>

#include <iostream>
#include <math.h>

void main()
{
	int dias, pessoas;
	float preco, valor, decimas;
	do { // Os dados em questão
		std::cin >> preco;// O preço
		std::cin >> dias;// Dias de marcação com antecedência
		std::cin >> pessoas;// Número de pessoas que vão
	} while (preco < 100 && preco >100000);
	preco = preco / 100;
	preco = preco - preco * 0.25;
	decimas = preco - trunc(preco);
	if (decimas > 0.5) // Processo de arredondamento das décimas
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

	preco = valor * 100;//Preço Final
	std::cout << preco;

}