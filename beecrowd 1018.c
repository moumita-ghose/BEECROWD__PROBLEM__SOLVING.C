#include <stdio.h>

int main() {

    int n100,n50,n20,n10,n5,n2,n1,amount;
    scanf("%d",&amount);
    n100=amount/100;
    amount=amount%100;
    printf("\n%d nota(s) de R$ 100,00\n",n100);

    n50=amount/50;
    amount=amount%50;
    printf("%d nota(s) de R$ 50,00\n",n50);

    n20=amount/20;
    amount=amount%20;
    printf("%d nota(s) de R$ 20,00\n",n20);

    n10=amount/10;
    amount=amount%10;
    printf("%d nota(s) de R$ 10,00\n",n10);

    n5=amount/5;
    amount=amount%5;
    printf("%d nota(s) de R$ 5,00\n",n5);

    n2=amount/2;
    amount=amount%2;
    printf("%d nota(s) de R$ 2,00\n",n2);

    n1=amount/1;
    amount=amount%1;
    printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}
