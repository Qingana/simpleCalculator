#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>


int cal_addition(int num1,int num2){

return num1 + num2;
}


int cal_subtraction(int num1,int num2){

return num1 - num2;
}

int cal_multiplication(int num1,int num2){
return num1 * num2;
}


int cal_division(int num1,int num2){
return num1 / num2;
}
int squareRoot(int number){
return sqrt(number);
}
int exponent(int number,int power){
return pow(number,power);
}
int main(){
int num1,num2,number,option,option2,option3,power;
printf("1.To perform calculation that include addition,multiplication,division,subtraction:\n");
printf("2.To perform square root or exponent:\n");
scanf("%d",&option2);


if (option2 == 1){
printf("Enter two integers to perform calculations:\n");
scanf("%d %d",&num1,&num2);
printf("Enter the number associated with calculations you would like to perform on the integers you entered above:\n\n");
printf("1.To perform addition on the numbers press 1:\n");
printf("2.To perform subtraction on the numbers press 2:\n");
printf("3.To perform multiplication on the numbers press 3:\n");
printf("4.To perform addition on the numbers press 4:\n");

scanf("%d",&option);
switch(option){
case 1:
printf("%d + %d = %d",num1,num2,cal_addition(num1,num2));
break;
case 2:
printf("%d - %d = %d",num1,num2,cal_subtraction(num1,num2));
 break;
case 3:
printf("%d x %d = %d",num1,num2,cal_multiplication(num1,num2));
break;
case 4:
printf("%d / %d = %d",num1,num2,cal_division(num1,num2));
break;
default:
{
printf("Invalid input");
}
}
}
else if (option2 == 2){
printf("Enter a number to get square root or exponent:\n");
scanf("%d",&number);
printf("1.To perform square root press 1:\n");
printf("2.To perform exponent press 2:\n");
scanf("%d",&option3);
switch(option3){
case 1:
printf("The square root of %d is %d",number,squareRoot(number));
break;
case 2:
printf("Enter the power number:\n");
scanf("%d",&power);
printf("%d to the power %d is %d\n",number,power,exponent(number,power));
break;
default: {
printf("Invalid input");

}
}
}
else {
    printf("Invalid input");
}
}
