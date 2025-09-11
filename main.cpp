/* Luis Meléndez Alejandro
   801-24-7022
   Lab3: Tres Números Aleatorios 
   Prof. Lillian González */

//incluir librerias
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //inicializar el generador de números aleatorios
    srand(time(0));

    //Generar número aleatorio
    int num1 = rand() % (100 - 0 + 1) + 0;
    int num2 = rand() % (100 - 0 + 1) + 0;
    int num3 = rand() % (100 - 0 + 1) + 0;
    //Desplegar números aleatorios
    cout << "Números aleatorios generados: " << num1 << ", " << num2 << ", " << num3 << endl;
    
    
    //Pedir condición para desplegar el orden descendiente y desplegar el programa en pantalla
    cout << "Orden descendiente: "; 
    if (num1 >= num2 && num2 >= num3)
        cout << num1 << " >= " << num2 << " >= " << num3 << endl;
    else if (num1 >= num3 && num3 >= num2)
        cout << num1 << " >= " << num3 << " >= " << num2 << endl;

    else if (num2 >= num1 && num1 >= num3)
        cout << num2 << " >= " << num1 << " >= " << num3 << endl;
    else if (num2 >= num3 && num3 >= num1)
        cout << num2 << " >= " << num3 << " >= " << num1 << endl;

    else if (num3 >= num1 && num1 >= num2)
        cout << num3 << " >= " << num1 << " >= " << num2 << endl;
    else if (num3 >= num2 && num2 >= num1)
        cout << num3 << " >= " << num2 << " >= " << num1 << endl;

   return 0;
}