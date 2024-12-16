#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define RMAX 40
#define CMAX 40

void fill2D(int a[RMAX][CMAX], int r, int c);
void show2D(int a[RMAX][CMAX], int r, int c);
void checksum2D(int a[RMAX][CMAX], int r, int c);

int main(){
    srand(time(0));

    int a[RMAX][CMAX];

    fill2D(a,3,3);
    show2D(a,3,3);
    printf("\n\n");

    checksum2D(a,3,3);
    show2D(a,4,4);


    
    




}

void fill2D(int a[RMAX][CMAX], int r, int c){
    int i,j;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j]=rand()%100;
        }
    }
}

void show2D(int a[RMAX][CMAX], int r, int c){
    int i,j;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void checksum2D(int a[RMAX][CMAX], int r, int c){
    int i,j,sum;

    for(i=0;i<r;i++){
        sum =0;
        for(j=0;j<c;j++){
            sum = sum+a[i][j];
        }
        a[i][j]=sum;
    }
    for(j=0;j<c+1;j++){
        sum =0;
        for(i=0;i<r;i++){
            sum = sum+a[i][j];
        }
        a[i][j]=sum;
    }



}