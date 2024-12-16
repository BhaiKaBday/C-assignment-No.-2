#include<stdio.h>
const double PI = 3.141593;
double sine(double x);


int main(){
    double x;
    printf("Sine of which number?: ");
    scanf("%lf",&x);
    printf("%lf",sine(67));

    return 0;
}


double sine(double x){
    int i;
        if(x>2*PI){
        for(i=0;1;i++){
            x = x - 2*PI;
            if(x<2*PI){
                break;
            }

        }

    }
    if(x<0){
        for(i=0;1;i++){
            x = x + 2*PI;
            if(x>0){
                break;
            }   

    }

    

    }

    double term = 0, num =x,den = 1, sine =0;
    //printf("%f\n",x);
    for(i = 0; i<20; i++){

        term = num/den;
        sine = term + sine;

        num = num*x*x*(-1);
        den = 2*den*(2*i+3)*(i+1);
    }

    return sine;
}