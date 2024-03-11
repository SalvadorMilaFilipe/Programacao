#include <iostream>
#include <string>
using namespace std;
int main()
{
	string comida = "Pizza";
	string* ptr = &comida;
	cout << comida;
	cout << "\n";
	cout << &comida;
	cout << "\n";
	*ptr = "Hamburguer";
	cout << comida;
	cout << "\n";
	cout << &comida;
	return 0;
}