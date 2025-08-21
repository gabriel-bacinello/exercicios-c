#include<stdio.h>
int main(){
   int num;

   printf("Digite um numero inteiro: ");
   scanf("%d", &num);

   printf("Decimal: %d\n", num);
   printf("Hexadecimal: %x\n", num);
   printf("Octal: %o\n", num);

   return 0;
}