#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int divisorCount = 0;

    cout << "Ingrese un numero entero: \n";
    cin >> n;

    for (int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            divisorCount++;
            break;
        }  
    }

    if (divisorCount == 0 && n != 1)
        cout << n << " es un numero primo.\n";
    else
        cout << n << " no es un numero primo.\n";

    return 0;
}