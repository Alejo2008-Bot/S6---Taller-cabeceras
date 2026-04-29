#include <stdio.h>
#include "suma.h"
#include "resta.h"
int main()
{
    int a,b;
    printf("ingrese 1er numero: ");
    scanf("%d", &a);
    printf("ingrese el 2do numero: ");
    scanf("%d", &b);
    printf("la suma es: %d\n", suma(a,b));
    printf("la resta es: %d\n", resta(a,b));

    return 0;
}