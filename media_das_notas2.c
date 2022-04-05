#include <stdio.h>

int main(void)

{

    /*Definindo variáveis*/
    float nota1, nota2, nota3, media;
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média das notas informadas é %.1f\n", media);

    return 0;


}