// runge kutta method
#include<stdio.h>
#include<math.h>
float round_off(float value) {
    return roundf(value * 10000) / 10000;}

float func(float x,float y){
    float result = pow(x,2)+pow(y,2);//equation to be solved
    return round_off(result);
}

int main(){
    float x0,y0,h,xn;
    float k1,k2,k3,k4;
    printf("enter the initial values of x0 and y0\n");
    scanf("%f%f",&x0,&y0);
    printf("enter the value of h\n");
    scanf("%f",&h);
    printf("enter the value of xn\n");
    scanf("%f",&xn);
    float n=(xn-x0)/h;
    float x=x0,y=y0;
    for(int i=0;i<n;i++){
        k1=func(x,y);
        k2=func(x+h/2,y+h*k1/2);
        k3=func(x+h/2,y+h*k2/2);
        k4=func(x+h,y+h*k3);
        y=y+h*(k1+2*k2+2*k3+k4)/6;
        x=x+h;
        printf("x=%.4f y=%.4f\n",x,y);
    }
    return 0;
}