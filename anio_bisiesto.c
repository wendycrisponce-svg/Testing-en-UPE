/*
Testing | Ejercicio 1 - Año Bisiesto
Enunciado
Dado a que usted pertenece a un equipo de desarrollo altamente calificado,
se le presenta el desafío planteado por el cliente externo que solicita
 con urgencia implementar un sistema que verifique si el año corriente
 es bisiesto o no, calculando la complejidad ciclomática, diseñando
  casos de prueba y verificando su cobertura en un entorno de testing.
Especificaciones Técnicas

La función "esBisiesto" ya fue desarrollada por un colega de su equipo,
 pero lamentablemente se eliminó, de todas maneras, su líder técnico
  junto con los analistas, encontraron parte de la documentación y
  definieron parcialmente la lógica que debería codificarse.

Consideraciones
Un año es bisiesto si es divisible por 4, pero no por 100,
 a menos que también sea divisible por 400.
Pseudocódigo

FUNCION esBisiesto(año):
SI (año MOD 4 == 0 Y año MOD 100 != 0) O (año MOD 400 == 0) ENTONCES
RETORNAR VERDADERO

*/
/*
años bisciestos son :

*/
#include <stdio.h>

int esBisiesto (int);
void test();

int main()
{
    test();

    return 0;
}

void test()
{

    int anios[] = {1994, 2000, 1900, 2024,1999};
    int n = sizeof(anios) / sizeof(anios[0]);

    for (int i = 0; i < n; i++)
     {
        if (esBisiesto(anios[i]))
            {
            printf("%d es  bisiesto\n", anios[i]);

         } else
           {
             printf("%d  NO es  bisiesto\n", anios[i]);
            }



}
}
 int esBisiesto(int anio)
 {
     int resultado=0;

    // (1)            (2)                (3)
  if((anio%4==0)&&(anio%100!=0) || (anio%400==0))
     {
      resultado =1;//(4)
     }

 return resultado;//(5)

 }

