#include<stdio.h>
int main()
{
float a,b, c,d,e;
double avg1, avg2;
scanf("%f %f %f %f",&a,&b,&c,&d);
avg1=((a*2)+(b*3)+(c*4)+d)/10;
if(avg1>=7.0){
    printf("Aluno aprovado.");
}else if(avg1<5){
    printf("Aluno reprovado.");
}else{
    printf("Aluno em exame.\n");
    scanf("%f",&e);
    avg2=(avg1+e)/2;
    if(avg2>=25.0){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }
}

return 0;
}
