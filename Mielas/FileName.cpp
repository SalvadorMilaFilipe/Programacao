#include <iostream>

using namespace std;
void calcularr(float& x, float& y)
{
	x = x / y;
}
void main()
{
	float despesa, pessoas;

	cin >> despesa;
	cin >> pessoas;
	calcularr(despesa, pessoas);
	cout << despesa;
}