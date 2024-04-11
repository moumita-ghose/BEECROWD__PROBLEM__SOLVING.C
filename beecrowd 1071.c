  #include <stdio.h>

int main() {
    int x,y,temp,i,sum=0,a;
    scanf("%d %d\n",&x,&y);
    if(x>y){
        temp=x;x=y;y=temp;
    }
    if(x%2==0){
        a=x+1;
    }else{
        a=x+2;
    }
    for(i=a;i<y;i+=2)

            sum=sum+i;
            printf("%d\n",sum);



    return 0;
}


