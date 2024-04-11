#include<stdio.h>
int main()
{
    int j,i;
    float n,m=0,avg;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n > 0){
            m += n;
            j++;
        }

    }
    avg=m / j;
    printf("%d valores positivos\n%.1f\n",j,avg);

 return 0;

}
