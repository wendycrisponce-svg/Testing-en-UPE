/*
//testear en caja negra
//funcion para testing
int ProbarFuncion(char Letra); //Implementar en ANSI C según lo indicado:

Para Letra minúscula, devuelve el código ASCII de la letra pasada
 a mayúscula.

Para Letra mayúscula, devuelve el código ASCII de la letra recibida.

Para cuando Letra es un número, devuelve el código ASCII del número.

Para cualquier otro valor, devuelve -1 (uno negativo)

NOTA: considerar como letra el alfabeto inglés,
sin incluir acentos, ñ, ü, etc.


*/
/*
#include <stdio.h>

void test();
int ProbarFuncion(char Letra);

int main() {

test();

    return 0;
}


void test()
{
       char letra='1';

    int resultado = ProbarFuncion(letra);

    if (resultado != -1) {
        printf("El codigo ASCII devuelto es: %d\n", resultado);
    } else {
        printf("ERROR: caracter no válido\n");
    }

}
int ProbarFuncion(char Letra) {
    // Si es minúscula: devolver ASCII de la mayúscula correspondiente
    if (Letra >= 'a' && Letra <= 'z') {
        return (int)(Letra - 32);
    }

    // Si es mayúscula: devolver su propio ASCII
    if (Letra >= 'A' && Letra <= 'Z') {
        return (int)Letra;
    }

    // Si es número: devolver su propio ASCII
    if (Letra >= '0' && Letra <= '9') {
        return (int)Letra;
    }

    // Para cualquier otro valor: devolver -1
    return -1;
}*/


//"2DA VERSION con #include<ctype.h>

#include <stdio.h>
#include <ctype.h>

void test();
int ProbarFuncion(char);


int main()
{

    test();
}


void test() {
    char pruebas[] = {'a', 'Z', '1', '#','l','?'};
    int n = sizeof(pruebas) / sizeof(pruebas[0]);

    for (int i = 0; i < n; i++) {
        int resultado = ProbarFuncion(pruebas[i]);
        if (resultado != -1) {
            printf("Caracter: %c -> Codigo ASCII: %d\n", pruebas[i], resultado);
        } else {
            printf("Caracter: %c -> ERROR: no valido\n", pruebas[i]);
        }
    }
}
int ProbarFuncion(char Letra) {
    if (islower(Letra)) {
        return (int)toupper(Letra); // convierte a mayúscula y devuelve ASCII
    }
    if (isupper(Letra)) {
        return (int)Letra; // devuelve ASCII de la mayúscula
    }
    if (isdigit(Letra)) {
        return (int)Letra; // devuelve ASCII del número
    }
    return -1; // cualquier otro carácter
}
