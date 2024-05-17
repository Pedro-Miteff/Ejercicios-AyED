#include <iostream>
using namespae std;

int main()
{

    int a, b;
    
    cout << "Ingresa un primer numero entero: ";
    cin >> a;

    cout << "Ingresa un segundo numero entero: ";
    cin >> b;

    int suma = a + b;
    int diferencia = a - b;
    int cociente = a * b;

    cout << "La suma entre " << a << " y " << b << " es: " << suma << endl;
    cout << "La diferencia entre " << a << " y " << b << " es: " << diferencia << endl;
    cout << "El cociente entre " << a << " y " << b << " es: " << cociente << endl;

    if (b != 0)
    {
        cout << "El cociente entre " << a << " y " << b << " es: " << a / b << endl;   
    }
    else
    {
        cout << "Ingrese un segundo numero distinto de cero para conocer el cociente";
    }

    return 0;

}
