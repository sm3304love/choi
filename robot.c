#include<stdio.h>
int main(){
 
    for(int num=1;num<101;num++){
    
        if((num%10)%3 == 0 && (num%10) != 0){
            printf("* \n");
        }
        else{
	    printf("%d \n",num);
        } 

    }
    return 0;
}

