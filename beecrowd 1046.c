#include <stdio.h>

int main() {

    int start,end,hour;
    scanf("%d %d",&start,&end);
    if(start>end){
        hour=(24-start)+end;
        printf("O JOGO DUROU %d HORA(S)\n",hour);
    }else if(end>start){
        hour=end-start;
        printf("O JOGO DUROU %d HORA(S)\n",hour);
    }
    else if(start==end){
        hour=24-start+end;
        printf("O JOGO DUROU %d HORA(S)\n",hour);
    }
    return 0;
}
