#include<stdio.h>

int lcm(int x, int y);


int main(){
    int x,y;

    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);

    printf("The HCF of %d and %d is %d",x,y,hcf(x,y));



    return 0;
}

int hcf(int x, int y){
    int i, smaller;
    smaller = y;
    if(x<y){
        smaller = x;
    }
    for(i=smaller;i>0;i--){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
}