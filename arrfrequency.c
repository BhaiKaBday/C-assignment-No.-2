#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 30

void show1D(int a[], int n);
void fill1D(int a[], int n);
int search1D(int a[],int n,int x);
int count1D(int a[],int n,int x);


int main(){
    srand(time(0));
    int a[MAX];
    int x;
    fill1D(a,10);
    show1D(a,10);

    printf("\ncount which element?: ");
    scanf("%d",&x);
    if(count1D(a,10,x) ){
        printf("The element occurred %d times",count1D(a,10,x));

    }else{
        printf("The element is not in the array");

    }




    return 0;
}

int search1D(int a[], int n, int x){
    int i;

    for(i=0;i<n;i++){
        if(a[i]==x){
            return i;

        }
    }

    return -1;



}
int count1D(int a[], int n, int x){
    int i,counter =0;

    for(i=0;i<n;i++){
        if(a[i]==x){
            counter++;

        }
    }

    return counter;
}
void fill1D(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        a[i]=rand()%100;

    }


}
void show1D(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);    
    }


}