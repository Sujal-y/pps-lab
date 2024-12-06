//regula falsi method
#include<stdio.h>
#include<math.h>
float func(float x,float c4,float c3,float c2,float c1,float c0){
    float result = c4*pow(x,4)+c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
    return result;
}
float x(float a,float b,float c4,float c3,float c2,float c1,float c0){
    return (a*func(b,c4,c3,c2,c1,c0)-b*func(a,c4,c3,c2,c1,c0))/(func(b,c4,c3,c2,c1,c0)-func(a,c4,c3,c2,c1,c0));
}
int main(){
    float c4,c3,c2,c1,c0;
    printf("write the coefficients of the polynomial\n");
    printf("x^4+x^3+x^2+x^1+x^0 ");
    scanf("%f%f%f%f%f",&c4,&c3,&c2,&c1,&c0);
    float a,b;
    printf("enter the interval\n");
    scanf("%f%f",&a,&b);
    float fa=func(a,c4,c3,c2,c1,c0);
    float fb=func(b,c4,c3,c2,c1,c0);
    float x1=x(a,b,c4,c3,c2,c1,c0);
    float fx1=func(x1,c4,c3,c2,c1,c0);
    while(fabs(fx1)>0.0001){
        if(fa*fx1<0){
            b=x1;
            fb=fx1;
        }
        else{
            a=x1;
            fa=fx1;
        }
        x1=x(a,b,c4,c3,c2,c1,c0);
        fx1=func(x1,c4,c3,c2,c1,c0);
    }
    printf("the root is %f",x1);
    
    

}