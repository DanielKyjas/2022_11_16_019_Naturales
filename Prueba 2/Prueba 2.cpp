// 202_09_11_014_Recursivida
//Daniel Callejas Rayón
// Potencias con recurividad
#include <iostream>
void potencia(int num1, int num2)
{
    if (num2 != 0)
    {
        potencia(num1 + num2-1, num2-1);
        std::cout << num1 << std::endl;
    }
}

int main()
{
    int suma, nat;
    std::cout << "Dime cuantos numeros naturales quieres sumar, empezando desde uno\n";
    std::cin >> suma;
    nat  = suma;
    potencia(suma, nat);
    std::cout << "\n\n";
}