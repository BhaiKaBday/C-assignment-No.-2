#include<stdio.h>

int isPrime(int x){
    int counter =0,i;

    for(i=2;i<x;i++){
        if(x%i==0){
            counter++;
        }

        
    }

    if(counter){
            return 0;
        }else{
            return 1;
        }

}

int nPrime(int n){

    int counter = 0,i;

    for(i=2;1;i++){
        if(isPrime(i)){
            counter++;

            if(counter==(n)){
                return i;
            }
        }


    }


}


void factor(int n){
    int i;
    for(i=1;n!=1;i++){
        if(((n)%(nPrime(i)))==0){
            printf("%d\n",nPrime(i));
            n = n/(nPrime(i));
            i=i-1;
           
        }
    }
}



int main(){

    int n;
    printf("Which number should be factored?: ");
    scanf("%d",&n);
    factor(n);
    return 0;
}

