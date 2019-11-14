#include<stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
   
    if(num%2 !=0){
        printf(" 홀수\n");
    }
     
    if(num%2 ==0){
        printf("odd\n");
    }

    return 0;

}
