#include<stdio.h>

int ncr(int n, int r);
int factorial(int n);


int main(){
    int n,r;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a number: ");
    scanf("%d",&r);

    //printf("%d\n", factorial(5));

    printf("The nCr of %d and %d is %d",n,r,ncr(n,r));



    return 0;
}


int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int ncr(int n,int r){
return (factorial(n)/(factorial(n-r)*factorial(r)));
}
