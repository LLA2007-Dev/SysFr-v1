#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "formulas.h"


int main()
{
    int Seleccion = 0;

    //  Limpia la pantalla
    system("cls");

    printf("Que quiere realizar:\n");
    printf("[1] Vv\n");
    printf("[2] Va\n");
    printf("[3] C\n");
    printf("SELEC: ");
    scanf("%d",&Seleccion);

    //  Condicion, crea un bucle el cual calcula si la seleccion esta en un rango de 1 a 3 o si termino la ejecucion
    while ((Seleccion >= 1 && Seleccion <= 3) || Seleccion != EOF)
    {
        switch (Seleccion)
        {
        //  1 == Calcular Vv
        case 1:
            calcularVv();
            break;
        case 2:
            calcularVa();
            break;
        case 3:
            calcularCuota();
            break;    
        
        default:
            printf("No Seleccionaste ninguna opcion valida\n");
            break;
        }
    }
    

    system("pause");
    return 0;
}