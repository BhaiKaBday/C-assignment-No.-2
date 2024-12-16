#include<stdio.h>

#define MAX 50
void pyramid(int n);


int main(){
    int n;
    printf("Pyramid of what size?: ");
    scanf("%d",&n);
    pyramid(n);


    return 0;
}

void pyramid(int n){
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=0;(j<(MAX-i));(j++)){
            printf(" ");
        }
        for(k=0;(k<(i+1));k++){
            printf("%d",(k+1)%10);
        }
        for(k=i;k>0;k--){
            printf("%d",k%10);
        }
        printf("\n");



    }
}


