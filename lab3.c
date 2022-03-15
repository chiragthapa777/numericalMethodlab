#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) (x*exp(x)-cos(x))
#define g(x) (x*exp(x)+exp(x)+sin(x))
void main()
{

    printf("Newton Rapson method to find approx root\n");
    float x0,e,x1;
    printf("\nenter inital guess x0=");
    scanf("%f",&x0);
    printf("\nenter tolerance error e=");
    scanf("%f",&e);
    // operating
    int i=1;
    printf("i\tx0\t\tx1\n");
    printf("______________________________\n");
    do{

        x1=x0-(f(x0)/g(x0));
        printf("%d\t%f\t%f\n",i,x0,x1);
        x0=x1;
        i++;
    }while(fabs(f(x1)>e));
    printf("an approximate root x1=%f",x1);
    printf("f(x)=%f",f(x1));
}