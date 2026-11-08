#include<stdio.h>
int main()
{
int choose;
float temp,conversion;
printf("1.Celsius to Fahrenheit\n");
printf("2.Fahrenheit to Celsius\n");
printf("Enter your Choice(1 or 2):");
scanf("%d",&choose);
if (choose==1){
    printf("Enter temperature in Celsius:");
    scanf("%f",&temp);
    conversion=(9/5)*temp+32;
    printf("Temperature in Fahrenheit is %.2f\n",conversion);
}
    else if(choose==2){
        printf("Enter temperature in Fahrenhiet:");
        scanf("%f",&temp);
        conversion=(temp-32)*5/9;
        printf("Temperature in Celsius is %.2f\n",conversion);
    }
    else{
        printf("Invalid Choice-_-");
    }
    return 0;
}
