#include <stdio.h>

int main() {
    int n,i,e=0,o=0,p=0,x=0;
    for(i=1;i<=5;i++){
        scanf("%d\n",&n);
    if(n%2==0){
        e++;
    }if(n%2==1){
        o++;
    }
    if(n > 0){
        p++;
    }if(n < 0){
        x++;
    }
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",x);
    return 0;
}
