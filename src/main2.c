#include<stdio.h>

int main()

{
    float side, area, volume;
    printf("Enter the  value for the side:");
    scanf("%f",&side);
    area=side*side;
    printf("The area is=");
    printf("%f",area);
    volume=side*side*side;
    printf("\n");
    printf("The volume is=:");
    printf("%f",volume);
    printf("\n");
    return 0;
}