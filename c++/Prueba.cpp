  #include <stdio.h> 
  #include <stdlib.h>
  #include <string.h>

void printBinary(int n, int i) 
{ 
    int k; 
    for (k = i - 1; k >= 0; k--) { 
  
        if ((n >> k) & 1) 
            printf("1"); 
        else
            printf("0"); 
    } 
} 
  void decabin (int n) {
    if (n) {
        decabin(n / 2);
        printf("%d", n % 2);
    }
}

typedef union { 
  
    float f; 
    struct
    { 
        unsigned int mantissa : 23; 
        unsigned int exponent : 8; 
        unsigned int sign : 1; 
  
    } raw; 
} myfloat; 
  

void printIEEE(myfloat var) 
{ 
    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf(" | ");
    printBinary(var.raw.mantissa, 23); 

    printf("\n"); 
    printf("\n");
    printf("Hexadecimal de Signo de IEEE 754 es : %x\n",var.raw.sign);
    printf("Hexadecimal de Exponente de IEEE 754 es : %x\n",var.raw.exponent, 8);
    printf("Hexadecimal de Mantissa de IEEE 754 es : %x\n",var.raw.mantissa, 23);

} 

  
int main() 
{ 

    myfloat var; 
    printf("Ingresa un numero en decimal: ");
    scanf("%f",&var.f);
printf("Binario de %f es:",var.f);

   decabin(var.f);
   printf("\n");
   printf("\n");

    printf("Decimal %f en IEEE 754  es : \n", var.f);
    printIEEE(var); 

    return 0; 
} 
