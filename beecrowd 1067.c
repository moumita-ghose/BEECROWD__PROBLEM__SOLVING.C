#include <stdio.h>

int main() {

    int N,i;
    scanf("%d\n",&N);
    for(i=1;i<N;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }

    return 0;
}
