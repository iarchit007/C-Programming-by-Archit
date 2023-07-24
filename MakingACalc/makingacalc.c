#include <stdio.h>
main()
{
    float a,b,c,d,e,f;
    int i1, i2;
    printf("Enter A Number (a): ");
    scanf("%f",&a);
    printf("Enter another Number (b): ");
    scanf("%f",&b);
    printf("Which operation do you want to perform? \n1. a+b\n2. a-b\n3. a*b\n4. a/b\nEnter number which is given before the operator to proceed with the desired operation:  ");
    scanf("%d",&i1);
    if(i1==1)
    {
        
        printf("a+b= %f",a+b);
    }
    else if(i1==2)   
    {
        
        printf("a-b= %f",a-b);
    }
    else if(i1==3)
    {
        
        printf("a*b= %f",a*b);
    }
    else if(i1==4)
    {
        
        printf("a/b= %f",a/b);
    }
    else
    {
        printf("Invalid");
    }
}