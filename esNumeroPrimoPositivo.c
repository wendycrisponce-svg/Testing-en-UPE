
/*
testear la funcion usando caja negra

int esNumeroPrimoPositivo(int);

//devuelve 1 cuando el número
 es primo y positivo;
 ó 0 cuando no es primo positivo
  ó es negativo.






/*
 1MER VERSION DONDE EL LIMITE DE NUMEROS A PROBRAR PARA CORROBORAR QUE
SON PRIMOS ES EL 100, ES DECIR, LLEGA HASTA EL 97.

EL LIMITE ES 97 QUE FUERON SUBIDOS MANUALMENTE EN UN INT ARRAY
Y USADO CON SIZEOF PARA QUE AL PONER UN NUMERO EN EL MAIN
ESTE SE COMPARE CON EL ARRAY. ASI QUE SI SE QUIERE USAR
NUMEROS MAS GRANDES NO SE PUEDE COMPARAR Y DEBE  AMPLIARSE EL ARRAY Y
PUEDE LLEGARA SER MAS TEDIOSO O COMPLEJO.

num primos son: 2, 3, 5 , 7, 11,13,
                17, 19, 23, 29 , 31,
                37, 41, 43, 47, 53, 59,
                61, 67, 71, 73, 79, 83,
                89, 97.
*/


#include <stdio.h>

void test();
int esNumeroPrimoPositivo(int n); //funcion que se utiliza a testear

int main() {

  test();

    return 0;
}
void test()
{
        //limite hasta 100 (97) de num primo
   // a probar
    int n = 43;//usado en la funcion para ver si es primo o no.

    //LLAMADO A FUNCION E INFORMA SI ES O NO PRIMO.
    //si retorna 1 es primo y si retorna 0, no lo es.

    if (esNumeroPrimoPositivo(n) == 1)
        {
          printf("%d es numero primo positivo\n", n);
        }

    else {
           printf("%d NO es numero primo positivo\n", n);
          }


}
int esNumeroPrimoPositivo(int n) {

    // "banco" de primos hasta 100(97) asi ya quedan almacenado
    // y se puede usar para comparar.

    int num_primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                    31, 37, 41, 43, 47, 53, 59, 61,
                    67, 71, 73, 79, 83, 89, 97};

    //sizeof
    int num_cantidad = sizeof(num_primos) / sizeof(num_primos[0]);

    //si es menor o igual a cero no es primo
    if (n <= 0){
            return 0;
     }
     //sino comparar con un for
     else{
          for (int i = 0; i < num_cantidad; i++)
            {
                //si es igual al array es primo
                if (n == num_primos[i])
                {
                return 1; // Es primo positivo
                }
            }
         }
    return 0; // No está en el array
}



/*
  //"2DA VERSION n>=100


#include <stdio.h>

void  test();
int esNumeroPrimoPositivo(int n);//funcion testear

int main() {

test();
    return 0;
}

void test( )
{
     int n = 101; // cambia este número para probar

    //si es primo retorna 1, sino retorna 0
    if (esNumeroPrimoPositivo(n) == 1)
        {
          printf("%d es numero primo positivo\n", n);
        }

    else {
            printf("%d NO es numero primo positivo\n", n);
         }
}
int esNumeroPrimoPositivo(int n)
{
    if (n <= 1)
     {
        return 0; // No es primo positivo
     }

     else
        {
            //compara
          for (int i = 2; i * i <= n; i++)
           {
             if (n % i == 0)
             {
               return 0; //si tiene divisor, no es primo
             }
           }
        }

    return 1; // No tiene divisor, doy por hecho que es primo
}
*/
