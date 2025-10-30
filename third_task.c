/* Task description:
Write a function that receives two numbers, and return !!both!! their sum and their product!
one function has to do that!
*/
#include <stdio.h>
void SumAndProduct (int n, int x, int *sum, int *product){
    *sum = n+x;
    *product = n*x;
}

int main(void) {
   
    int n, x;
    printf("Enter two numbers: \n");
    scanf("%d%d", &n, &x);
    int sum, product;
    SumAndProduct(n, x, &sum, &product);
    printf("The two numbers: %d and %d\n", n, x);
    printf("The sum: %d\n", sum);
    printf("The product: %d\n", product);

    return 0;
}
