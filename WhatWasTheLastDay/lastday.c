#include <stdio.h>
main()
{
    char ch1,a,b,c,d,e,f,g,h,Y,N,n,y;
    printf("a= Sunday\n");
    printf("b= Monday\n");
    printf("c= Tuesday\n");
    printf("d= Wednesday\n");
    printf("e= Thursday\n");
    printf("f= Friday\n");
    printf("g= Saturday\n");
    printf("Is this a leap year (Enter Y for Yes and N for No): ");
    scanf("%c",&h);
    if(h=='N'||h=='n')
    {
        printf("Enter the first day of the Year: ");
        scanf(" %c",&ch1);
        if(ch1=='a')
        {
            printf("The last day of the year is: %c",'a');
        }
        if(ch1=='b')
        {
            printf("The last day of the year is: %c",'b');
        }if(ch1=='c')
        {
            printf("The last day of the year is: %c",'c');
        }if(ch1=='d')
        {
            printf("The last day of the year is: %c",'d');
        }
        if(ch1=='e')
        {
            printf("The last day of the year is: %c",'e');
        }if(ch1=='f')
        {
            printf("The last day of the year is: %c",'f');
        }if(ch1=='g')
        {
            printf("The last day of the year is: %c",'g');
        }
    }
    if(h=='Y'||h=='y')
    {
        printf("Enter the first day of the Year: ");
        scanf(" %c",&ch1);
        if(ch1=='b')
        {
            printf("The last day of the year is: %c",'c');
        }
        if(ch1=='c')
        {
            printf("The last day of the year is: %c",'d');
        }
        if(ch1=='d')
        {
            printf("The last day of the year is: %c",'e');
        }
        if(ch1=='e')
        {
            printf("The last day of the year is: %c",'f');
        }
        if(ch1=='f')
        {
            printf("The last day of the year is: %c",'g');
        }
        if(ch1=='g')
        {
            printf("The last day of the year is: %c",'a');
        }
        if(ch1=='a')
        {
            printf("The last day of the year is: %c",'b');
        }
    }
}