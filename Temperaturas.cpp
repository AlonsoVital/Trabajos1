#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
    setlocale (LC_CTYPE, "Spanish");
    /*float cel = 18, fah = 86;
    float fahrenheit, celsius;
    
    cout <<"Conversiones De Temperaturas\n" << endl;

    fahrenheit = (9/5.0)*cel + 32;
    celsius = (fah - 32.0)*(5.0/9.0);
    cout << "La temperatura en Celsius    : " << celsius << endl;
    cout << "La temperatura en Fahrenheit : " << fahrenheit << endl;*/
    
    cout << "Conversión de temperaturas\n" << endl;
    
    float cel, fah, celsius, fahrenheit;

    cout << "Escribe la temperatura en Celsius para convertirla en Fahrenheit: ";
    cin >> cel;

    cout << "Escribe la temperatura en Fahrenheit para convertirla en Celsius: ";
    cin >> fah;

    fahrenheit = (9/5.0)*cel + 32;
    celsius = (fah - 32.0)*(5.0/9.0);
    
    cout << "\nLa temperatura de Fahrenheit a Celsius es: " << celsius << endl;
    cout << "La temperatura de Celsius a Fahrenheit es: " << fahrenheit << endl;
    
    return 0;
}
