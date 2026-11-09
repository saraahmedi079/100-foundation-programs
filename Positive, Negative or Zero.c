#include<stdio.h>
int main()
{
int n;
printf("Enter a Number:");
scanf("%d",&n);
if(n>0){
printf("%d is a Positive Number.\n",n);
}
else if(n<0){
printf("%d is a Negative Number.\n",n);
}
else {
printf("Given Number is Zero.\n",n);
}
return 0;
}
