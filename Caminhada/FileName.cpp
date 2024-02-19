#include <iostream>​
#include <string>​
#include <locale.h>

int main()
{
    using namespace std;
    int k[1000], m[1000], i, kil[1000], Alto, Baixo,Patamar,caminhada=0;
    for (i = 0; i < 1000; i++)
    {
        do {
            cin >> k[i];
            cin >> m[i];
        } while ((k[i] > 100 || k[i] < 0) || (m[i] >999 || m[i] < 0));

        if (k[i] == 0 && m[i] == 0 && caminhada > 1)
        {
            cout << "Acabou!!!";
            break;
        }
        else
        
            if (k[i] == 0 && m[i] == 0 && caminhada <= 1)
            {
                cout << "Não pode ser amigo!";
                break;
            }
        
        else
        {
            caminhada = caminhada + 1;
        }
    }
    
    for (i = 1; i <= caminhada; i++)
    {
        kil[i - 1] = k[i - 1] * 1000 + m[i - 1];
        kil[i] = k[i] * 1000 + m[i];

        if (kil[i] > kil[i - 1])
        {
            cout << "Alto " << (kil[i] - kil[i - 1]) / 1000 << "km " << (kil[i] - kil[i - 1]) % 1000 << "m.\n";
        }
        else
            if (kil[i] < kil[i - 1])
        {
            
            
                cout << "Baixo " << (kil[i-1] - kil[i]) / 1000 << "km " << (kil[i-1] - kil[i]) % 1000 << "m.\n";
            
        }
        else
        {
            cout << "Patamar";
        }  
    }
    return 0;
}