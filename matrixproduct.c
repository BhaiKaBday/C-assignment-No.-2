#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define RMAX 40
#define CMAX 40

void fill2D(int a[RMAX][CMAX], int r, int c);
void show2D(int a[RMAX][CMAX], int r, int c);
void checksum2D(int a[RMAX][CMAX], int r, int c);
void product2D(int a[RMAX][CMAX], int r1, int c1,int b[RMAX][CMAX], int r2, int c2,int c[RMAX][CMAX]);


int main(){
    srand(time(0));

    int a[RMAX][CMAX];
    int b[RMAX][CMAX];
    int c[RMAX][CMAX];

    fill2D(a,3,3);
    show2D(a,3,3);
    printf("\n\n");
    fill2D(b,3,3);
    show2D(b,3,3);
    printf("\n\n");

    product2D(a,3,3,b,3,3,c);
    show2D(c,3,3);


    
    




}

void fill2D(int a[RMAX][CMAX], int r, int c){
    int i,j;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j]=rand()%10;
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

void product2D(int a[RMAX][CMAX], int r1, int c1,int b[RMAX][CMAX], int r2, int c2,int c[RMAX][CMAX]){
     int i,j,k,sum;
        if(c1==r2){
           

            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    sum=0;
                    
                    for(k=0;k<c1;k++){
                        sum = sum + a[i][k]*b[k][j];
                    }
                    c[i][j]=sum;
                }
    }
        }else{
            printf("Invalid Inputs\n");
        }
}