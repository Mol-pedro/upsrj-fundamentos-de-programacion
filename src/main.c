#include<stdio.h>

int is_even(int number);

int main()
{
 printf("=== Par o impar ===\n");
 int number;
 printf("INSERTA UN NUMERO:");
 scanf("%d", &number);

 if(is_even(number) == 1)
 {
    printf("EL NUMERO ES PAR\n");
 }
 else
 {
    printf("EL NUMERO ES IMPAR\n");
 }
 return 0;
}

int is_even(int number)
{
    if(number %2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}