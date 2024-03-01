#include<stdio.h>

int main (){
    int x,n,sum=0;
    printf("input the ending number : ");
    scanf("%d",&n);
    printf("the first %d even numbers : \n");
        for (x=2;x<=n;x=x+2){
            printf("%d\n",x);
            sum=sum+x;
        }
        printf("the addition of all even number : ");
        printf("%d\n",sum=sum);
    return 0;
}
