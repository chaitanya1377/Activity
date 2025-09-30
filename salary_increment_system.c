#include <stdio.h>


int main()
    {
        int a,b,c,d,t;
        printf("Enter the qualification of the emoployee.\n");
        printf("1) Bachelor's\n2) Master's\n3) PHD\n");
        printf("Enter the option (integer only): ");
        scanf("%d",&a);
   
        printf("\nEnter the weekly workhours of the employee.\n");
        printf("1) Less than 40 hours\n2) Between 40 and 45 hours\n3) More than 45 hours\n");
        printf("Enter the option (integer only): ");
        scanf("%d",&b);


        printf("\nEnter the number of projects executed by the employee.\n");
        printf("1) Less than 5\n2) Between 5 and 10\n3) More than 10\n");
        printf("Enter the option (integer only): ");
        scanf("%d",&c);


        printf("\nEnter the level of problem solving skills of the employee.\n");
        printf("1) Average\n2) More than Average\n3) Excellent\n");
        printf("Enter the option (integer only): ");
        scanf("%d",&d);


        t=a+b+c+d;
        printf("\nThe score of the employee is %d.\n",t);


        if (10<=t)
            {printf("The increment is of Rs.15000");}
        else if (6<=t<10)
            {printf("The increment is of Rs.10000");}
        else
            {printf("No increment in salary");}


    return 0;

}
