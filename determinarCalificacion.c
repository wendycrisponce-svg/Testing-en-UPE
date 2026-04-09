
/*
impremente una funcion que,dado un porcentaje (de 0 a 100),
devuelva una calificacion de forma caracter: 'A' (90-100),
'B' (80-89), 'C' (70-79), 'D' (60-69) o 'F' (0-59).
las pruebas unitarias deben cubrir todos los rangos
de calificacion y los valores limites
(los extremos de los rangos).

ademas, haciendo uso de las mejores practicas de desarrolo,
la funcion a implementar debera tener un unico return.

especificaciones tecnicas:

implementar la siguente funcion con la logica en el
enunciado:

char determinarCalificacion(int puntaje);

int test;
*/

//Usar swith

#include<stdio.h>
void test();
char determinarCalificacion(int puntaje);

int main(){

  test();

    return (0);
}
void test() {
    // Pruebas de valores límite y rangos
    int pruebas[] = {108,100, 90, 89, 80, 79, 70, 69, 60, 59, 0, -12};
    int n = sizeof(pruebas) / sizeof(pruebas[0]);
         char resultado;

        for (int i = 0; i < n; i++)
         {
            char resultado = determinarCalificacion(pruebas[i]);
            printf("Puntaje: %d -> Calificacion: %c\n", pruebas[i], resultado);

          }

}



char determinarCalificacion(int puntaje)
{


    char rango='x';

    if(puntaje>=0)
        {
          if(puntaje>=90 && puntaje<=100)
          {
              rango='A';
          }
         else if(puntaje>=80 && puntaje<=89)
          {
              rango='B';
          }
          else if(puntaje>=70 && puntaje<=79)
          {
             rango='C';
          }
          else if(puntaje>=60 && puntaje<=69)
          {
             rango='D';
          }
          else if(puntaje>=0 && puntaje<=59)
          {
              rango='F';
          }

        }


/*
char rango;
if (puntaje < 0 || puntaje > 100) {
        rango = 'X'; // inválido
    } else {
        switch (puntaje) {
            case 10: // 100
            case 9:  // 90–99
                rango = 'A';
                break;
            case 8:  // 80–89
                rango = 'B';
                break;
            case 7:  // 70–79
                rango = 'C';
                break;
            case 6:  // 60–69
                rango = 'D';
                break;
            default: // 0–59
                rango = 'F';
                break;
        }

    }
*/
    return rango;
}
