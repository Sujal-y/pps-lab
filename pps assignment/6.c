#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,N,X,r,n,output;
    printf("NAME:- Sujal Y\n");
    printf("REGISTRATION NUMBER:- 245805200 \n");
    printf("Section :- B\n");   

    printf("enter number of test cases - ");
    scanf("%d",&T);//test cases
    int a[T];
    if (T>=1 && T<=1000)    
    {
        while(T>0)
        {
            printf("\nEnter the number - ");
            scanf("%d",&N);
            if (N>=1 && N<=500)//number check
            {
                X=N+1;
                while(X>N)
                {
                    n=X;
                    if(X%N==0)
                    {
                        output=0;
                        while(X>0)
                        {
                            r=X%10;
                            if(r==9 || r==0)
                                output=1;
                            else
                            {
                                output=2;
                                break;
                            }
                            X=X/10;
                        }
                        if(output==1)
                        {
                            printf("%d",n);
                            break;
                        }
                    }
                    X=n;
                    X=X+1;
                }
            }
            else
            {
                printf("invalid number entered");
                exit(0);
            }
            T--;
        }
    }
    else
        printf("test case entered is invalid");
    printf("\n");
    return 0;
}   