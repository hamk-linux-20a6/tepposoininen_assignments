#include <stdio.h>

float convert(float a);

int main()
{
        float inch,cm;
        printf("How many inches? ");
        if(scanf("%f",&inch)){
        cm=convert(inch);
        printf("%.2lf inches is %.2lf cm \n",inch,cm);
} else{
printf("Invalid input. Please input valid floating point numbers. \n");
}
        return 0;
}

float convert(float a)
{
        float cm1;
        cm1=a*2.54;
        return cm1;
}
