#include <stdio.h>
#include"..\inc\cal.h"
#include<math.h>


typedef struct binary{
    int num;
}binary;
int main(){
    binary b;
    b.num;
    printf("*****************************\n");
    printf("enter numbers\n");
    scanf("%d",&b.num);
        int num1=Decimal_to_Binary(b.num);
        printf("decimal to binary is :%d\n",num1);
       scanf("%d",&b.num);
            int num2=Binary_to_Decimal(b.num);
            printf("binary to decimal : %d\n",num2);
        scanf("%d",&b.num);
            int num3=Binary_to_Octal(b.num);
            printf("binary to octal :%d\n",num3);
        scanf("%d",&b.num);
            int num4=Decimal_to_Octal(b.num);
            printf("decimal to octal : %d\n",num4);
        scanf("%d",&b.num);
            int num5=Octal_to_Binary(b.num);
            printf("octal to binary : %d\n",num5);
        scanf("%d",&b.num);
            int num6=Octal_to_Decimal(b.num);
            printf("octal to decimal : %d\n",num6);
            printf("********************************\n");
}
