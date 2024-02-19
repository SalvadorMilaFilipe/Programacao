#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	string txt;
	int i, escolha, A = 0, E = 0, I = 0, O = 0, U = 0;
	setlocale(LC_ALL, "Portuguese");
    
	do 
	{
	     cout << "_____MENU MUITO FIXE_____\n";
	     cout << "0 – Sair\n";
		 cout << "1 – Contar Vogais da frase\n"; ​
		 cin >> escolha;
		 switch (escolha)
		 {
		 case 1:
		 {

			 cout << "Escreve uma frase\n";
			 cin.ignore();
			 getline(cin, txt);

			 for (i = 0; i < txt.size(); i++)
			 {

				 switch (txt[i])
				 {
				 case 'A':
				 case 'a':
				 {
					 A = A + 1;
					 break;
				 }
				 case 'E':
				 case 'e':
				 {
					 E = E + 1;
					 break;
				 }
				 case 'I':
				 case 'i':
				 {
					 I = I + 1;
					 break;
				 }
				 case 'O':
				 case 'o':
				 {
					 O = O + 1;
					 break;
				 }
				 case 'U':
				 case 'u':
				 {
					 U = U + 1;
					 break;
				 }
				 }

				 cout << "Escreveste a Vogal A" << A << "vezes, a Vogal E" << E << "vezes, a Vogal I" << I << "vezes, a Vogal O " << O << "vezes, a Vogal U " << U << "vezes.\n";
				 A = 0;
				 E = 0;
				 I = 0;
				 O = 0;
				 U = 0;
				 break;

			 }
		 case 0:
			 break;
		 default:
		 }
		  break;
		 }
	 }
    }while (escolha != 0);
	return 0;
}