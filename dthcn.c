#include<stdio.h>
void calculatearea(double *area , double length ,double width )
{
    *area = length * width ;
}
void main(){
    double area , length , width ;
    printf("Enter length :");
    scanf("%lf",&length);
    printf("Enter width :");
    scanf("%lf",&width) ; 
    calculatearea(&area , length , width);
    printf("Areaofrectangle :%0.2lf",area);
}

