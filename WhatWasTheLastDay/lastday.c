#include <stdio.h>
main()
{
    char ch1,a,b,c,d,e,f,g,h,i;
    int i1,i2=365,i3=366;
    printf("a= Sunday\n");
    printf("b= Monday\n");
    printf("c= Tuesday\n");
    printf("d= Wednesday\n");
    printf("e= Thursday\n");
    printf("f= Friday\n");
    printf("g= Saturday\n");
    printf("How many days are there in the year: ");
    scanf("%d",&i1);
    if(i1==i2)
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
    if(i1==i3)
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