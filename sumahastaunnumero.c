#include <stdio.h>

/*Funcionamiento programa: Si introducimos el número 10, la suma imprimira 55. ¿Por qué? Suma los 10 primeros números 1+2+3+4+5+6+7+8+9+10=55  */

int main () {
    
    int x,i,suma = 0;
    
    printf("Introduce un número: ");
    scanf("%i", &x);
    
    for (i=1; i<=x ;i++) {
        suma +=i;
    }
    printf("La suma és: %i\n",suma);
    
    return 0;
}


