/* UTN-FRBA-AED
 * TP N� 3: Tipos de Datos:Valores y Operaciones
 * Alumno: Victor H Bulgarelli - 2476976
 * Fecha: 02/05/2019
*/


#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main(){

char l;
bool pruebabool;
int sumuno, sumdos, i;
double dividendo, divisor;
string cad;


cout <<endl;
            cout << "\t Tipos de Datos: Valores y Operaciones" << endl;
cout <<endl;

/*Valores bool ---------------------------------------------------------------------------------------------*/
cout <<endl;
            cout << "\t Valores de bool - Muestra valores: " << endl;
cout <<endl;
            pruebabool = false;
			cout << "\n";
			cout << std::boolalpha << pruebabool << " o "; // la funci�n boolalpha expresa los booleanos como
			pruebabool = ~pruebabool; 			    // true o false.
			cout <<std::boolalpha << pruebabool << endl; // ~pruebaboolaqu� har�a que el display sea "1"
			cout << "\n";
/*Valores bool ---------------------------------------------------------------------------------------------*/


/*Valores char ---------------------------------------------------------------------------------------------*/
cout <<endl;
            cout << "\t Valores de char - Muestra valores: " << endl;
cout <<endl;
			cout << "\n";
			l = 0;
			for (int n = 0; n < 128; n++)
			{
				l = n;
				cout << l << " "; //algunos de los caracteres iniciales del grupo ASCII no se  representan en pantalla
			}
			cout << endl << "\n";
/*Valores char ---------------------------------------------------------------------------------------------*/

/*Convertir string en char ---------------------------------------------------------------------------------------------*/
			cout << "\n";
			cout << "Ingrese la cadena a descomponer en char: ";
            cin >> cad;
            for (i=0; cad[i]!='\0'; i++)
            cout << cad[i] << endl;
			cout << endl;
/*Convertir string en char ---------------------------------------------------------------------------------------------*/

/*Adicionar dos int entre si ---------------------------------------------------------------------------------------------*/
            cout <<endl;
            cout << "\t Adicionar dos int entre si: " << endl;
            cout <<endl;
			cout << "Inserte el primer numero de la sumatoria: ";
			cin >> sumuno;
			cout << "Inserte el segundo numero de la sumatoria: ";
			cin >> sumdos;
			cout << "El resultado es: " << (sumuno + sumdos) << endl;
            cout <<endl;
/*Adicionar dos int entre si ---------------------------------------------------------------------------------------------*/

/*Dividir dos double entre si ---------------------------------------------------------------------------------------------*/
            cout <<endl;
            cout << "\t Dividir dos double entre si: " << endl;
            cout <<endl;
			cout << "\n";
			cout << "Inserte el dividendo: ";
			cin >> dividendo;
			cout << "Inserte el divisor: ";
			cin >> divisor;
			cout << "El resultado es: " << (dividendo / divisor) << endl;
			cout << "\n";
/*Dividir dos double entre si ---------------------------------------------------------------------------------------------*/


    return 0;
}
