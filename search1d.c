#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 30

void show1D(int a[], int n);
void fill1D(int a[], int n);
int search1D(int a[],int n,int x);
int main(){
    srand(time(0));
    int a[MAX];
    int x;
    fill1D(a,10);
    show1D(a,10);

    printf("\nsearch for what element?: ");
    scanf("%d",&x);
    if(search1D(a,10,x)+1){
        printf("The element is on index %d",search1D(a,10,x));

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