#include <stdio.h>

int main() {

    double amount;
    int vagshesh,n100,n50,n20,n10,n5,n2,n1,n500,n2500,n1000,n5000,n7;
    int integerN;
    scanf("%.2lf\n",&amount);
    integerN=amount*100;
    printf("NOTAS:\n");
    n100=integerN/(10000);
    vagshesh=integerN%(10000);
    printf("%d nota(s) de R$ 100.00\n",n100);
    n50=vagshesh/(5000);
    vagshesh=vagshesh%(5000);
    printf("%d nota(s) de R$ 50.00\n",n50);
    n20=vagshesh/(2000);
    vagshesh=vagshesh%(2000);
    printf("%d nota(s) de R$ 20.00\n",n20);
    n10=vagshesh/(1000);
    vagshesh=vagshesh%(1000);
    printf("%d nota(s) de R$ 10.00\n",n10);
    n5=vagshesh/(500);
    vagshesh=vagshesh%(500);
    printf("%d nota(s) de R$ 5.00\n",n5);
    n2=vagshesh/(200);
    vagshesh=vagshesh%(200);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    n1=vagshesh/(100);
    vagshesh=vagshesh%(100);
    printf("%d moeda(s) de R$ 1.00\n",n1);
    n500=vagshesh%(50);
    vagshesh=vagshesh%(50);
    printf("%d moeda(s) de R$ 0.50\n",n500);
    n2500=vagshesh/(25);
    vagshesh=vagshesh%(25);
    printf("%d moeda(s) de R$ 0.25\n",n2500);
    n1000=vagshesh/(10);
    vagshesh=vagshesh%(10);
    printf("%d moeda(s) de R$ 0.10\n",n1000);

        n5000=vagshesh/(5);
    vagshesh=vagshesh%(5);
    printf("%d moeda(s) de R$ 0.05\n",n5000);

    n7=vagshesh/(1);
    vagshesh=vagshesh%(1);
    printf("%d moeda(s) de R$ 0.01\n",n7);

    return 0;
}
