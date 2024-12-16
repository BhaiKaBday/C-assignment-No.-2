#include<stdio.h>

int lcm(int x, int y);


int main(){
    int x,y;

    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);

    printf("The LCM of %d and %d is %d",x,y,lcm(x,y));



    return 0;
}

int lcm(int x, int y){
    int i, larger;

    larger = y;
    if(x>y){

        larger = x;
    }
    for(i=larger;1;i++){
        if(i%x==0 && i%y==0){
            return i;
        }

    }
}