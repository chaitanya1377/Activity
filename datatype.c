#include<stdio.h>

typedef struct franchise_info
{
    char address[15];
    float turnover;
    float cost;
    float profit;
}info;


int main()
{
    info f[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter address, turnover and cost of franchise %d:\n",i+1);
        scanf("%s %f %f",f[i].address,&f[i].turnover,&f[i].cost);
        f[i].profit=f[i].turnover - f[i].cost;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (f[j].profit < f[j + 1].profit)
            {
                info temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
            
        }
        
    }
    
    printf("Franchises in descending order of profit:\n");
    for(int i=0;i<5;i++)
    {
        printf("Address: %s, Turnover: %.2f, Cost: %.2f, Profit: %.2f\n",f[i].address,f[i].turnover,f[i].cost,f[i].profit);
    }

    return 0;
}

