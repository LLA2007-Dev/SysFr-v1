#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void linea()
{
    for (int i = 1; i <= 85; i++)
    {
        printf("-");
    }
    printf("\n");
}

void cabecera()
{
    system("cls");
    printf("%s", "Anio");
    printf("%20s", "Deuda inicial");
    printf("%20s", "Interes");
    printf("%20s", "Amortizacion");
    printf("%20s", "Cuota");

    printf("\n");
    linea();

}



void calcularVv()
{
    //  VARIABLES QUE INGRESA EL USUARIO
    double cuota = 0;
    double interes = 0;
    double numeroCuotas = 0;

    //  VARIABLES QUE SE TIENEN QUE CALCULAR
    double Vv = 0;
    double Vv_Arriba = 0;
    double Vv_Abajo = 0;


    //  EL USUARIO INGRESA EL VALOR DE LAS VARIABLES: cuota interes y numero de cuotas
    printf("Ingresa el monto de la Cuota: ");
    scanf("%lf",&cuota);
    printf("Ingresa el interes: ");
    scanf("%lf",&interes);
    interes = interes / 100;
    printf("Ingresa el plazo: ");
    scanf("%lf",&numeroCuotas);

    //  FORMULA PARA HALLAR LA CUOTA POR VENCIMIENTO
    //Vv = (cuota * (pow((1 + interes),numeroCuotas) - 1)) / (interes * pow((1 + interes),numeroCuotas));
    Vv = (cuota * (pow((1 + interes),numeroCuotas) - 1)) / (interes * (pow((1 + interes),numeroCuotas)));

    //printf("%lf  %lf  %lf\n",cuota,interes,numeroCuotas);
    //printf("%.0lf",Vv);

    //  CABECERA
    cabecera();

    //  TABLA DENTRO DE LA CABECERA
    printf("%4d",numeroCuotas);
    printf("%16.2lf",Vv);
    
    

    printf("\n");
}



//  Por realizar
void calcularVa()
{

}
void calcularCuota()
{
    
}