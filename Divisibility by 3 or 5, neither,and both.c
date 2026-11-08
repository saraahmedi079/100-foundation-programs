#include<stdio.h>
int main()
{
int n;
printf("Enter your number:");
scanf("%d",&n);

if(n%15==0){
printf("Divisible by Both.\n");
}
else if(n%3==0){
printf("Divisible by 3.\n");
}
else if(n%5==0){
printf("Divisible by 5.\n");
}
else {
printf("Divisible by Neither.\n");
}
return 0;
}
