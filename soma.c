#include <stdio.h>

int main(void)
{
    int v1, v2, soma;

    printf("ditite o valor 1: \n");
    scanf("%i", &v1);

    printf("ditite o valor 2: \n");
    scanf("%i", &v2);

    soma = v1 + v2;

    printf("Resultado: %i + %i = %i \n",v1,v2,soma);
}
