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
    switch(i1)
    {
    case 1:
    {
        
        printf("a+b= %f",a+b);
    }
    break;
    case 2:   
    {
        
        printf("a-b= %f",a-b);
    }
    break;
    case 3:
    {
        
        printf("a*b= %f",a*b);
    }
    break;
    case 4:
    {
        
        printf("a/b= %f",a/b);
    }
    break;
    default:
    {
        printf("Invalid");
    }
    }
}