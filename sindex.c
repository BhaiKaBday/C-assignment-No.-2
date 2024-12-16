#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 30

void show1D(int a[], int n);
void fill1D(int a[], int n);
int search1D(int a[],int n,int x);
int sindex(int a[], int n);

int main(){
    srand(time(0));
    int a[MAX];
    int x;
    fill1D(a,10);
    show1D(a,10);

    printf("\nThe index of the smallest element %d is %d",a[sindex(a,10)],sindex(a,10));






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

int sindex(int a[], int n){
    int i,smallest,index;
    smallest = a[0];
    index =0;
    for(i=1;i<n;i++){
        if(a[i]<smallest){
            smallest= a[i];
            index = i;
        }
    }

    return index;

}
