#include<stdio.h>

int is2exp(int n);

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    if(is2exp(n)){
        printf("%d is an exponent of 2",n);
    }else{
        printf("%d is not an exponent of 2",n);

    }

    return 0;
}

int is2exp(int n){
    int i, pow=1;

    for(i=0;pow<=n;i++){
        if(pow==n){
            return 1;
        }
        pow = pow*2;
    }
    return 0;
}