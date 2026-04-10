

/*

Testing | Ejercicio 3 - Precio final (Caja Blanca)
Enunciado
Implemente una función que, dado el precio original de un producto
y un porcentaje de descuento, calcule y retorne el precio final.
La función debe manejar el caso de precios o descuentos negativos,
 devolviendo un valor especial para indicar un error (-1).
Además, haciendo uso de las mejores prácticas de desarrollo,
la función a implementar deberá tener un único RETURN.


Especificaciones Técnicas
1. Implementar la siguiente función
con la lógica especificada en el enunciado.
   a. int calcular_precio_final(double precio_original, int descuento_porcentaje)


*/
#include <stdio.h>

 void test();
int calcular_precio_final(double precio_original, int descuento_porcentaje);

int main()
{

  test ();


    return 0;
}


void test(){

double resultado=calcular_precio_final(1050.99,25);

   if (resultado != -1) {
        printf("Precio final: %.2f\n", resultado);
    } else {
        printf("ERROR: datos invalidos\n");
    }
resultado=calcular_precio_final(2250.99,30);

   if (resultado != -1) {
        printf("Precio final: %.2f\n", resultado);
    } else {
        printf("ERROR: datos invalidos\n");
    }


resultado=calcular_precio_final(9350.99,-10);

   if (resultado != -1) {
        printf("Precio final: %.2f\n", resultado);
    } else {
        printf("ERROR: datos invalidos\n");
        }

resultado=calcular_precio_final(1000.9,-5);

   if (resultado != -1) {
        printf("Precio final: %.2f\n", resultado);
    } else {
        printf("ERROR: datos invalidos\n");
    }
}

int calcular_precio_final(double precio_original, int descuento_porcentaje)
{
    double precio_final = -1; // valor por defecto: error

    if (precio_original >= 0 && descuento_porcentaje >= 0) {
        double monto_a_descontar = precio_original * descuento_porcentaje / 100.0;
        precio_final = precio_original - monto_a_descontar;
    }

    return precio_final; // único return


}





