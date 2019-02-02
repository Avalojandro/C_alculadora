#include <stdio.h>
int main()
{
    int opcion,a,b,resultado;
    printf("Ingrese un numero entero [a]: ");
    scanf("%d",&a);
    printf("Ingrese un numero entero [b]: ");
    scanf("%d",&b);
    printf("Menu\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Dividir\n");
    printf("4. Multiplicar\n");
    printf("Elija una operacion: ");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
            resultado=a+b;
            printf("%d + %d = %d\n",a,b,resultado);
break;
        case 2:
            resultado=a-b;
            printf("%d - %d = %d\n",a,b,resultado);
            break;
        case 3:
            resultado=a/b;
            printf("%d / %d = %d\n",a,b,resultado);
            break;
        case 4:
            resultado=a*b;
            printf("%d x %d = %d\n",a,b,resultado);
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }
}
