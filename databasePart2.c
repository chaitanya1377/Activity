#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef struct franchise_info
{
    char address[30];
    float turnover;
    float cost;
    float profit;
} info;

int main()
{
    int a;
    printf("Enter the number of stores: ");
    scanf("%d", &a);

    info f[a];
    int option, i;
    int data_entered = 0;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1) Add data in database.\n");
        printf("2) Display the entered data.\n");
        printf("3) Sort the data according to profit.\n");
        printf("4) Get data of a particular shop.\n");
        printf("5) Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter details as follows:\n");
            for (i = 0; i < a; i++)
            {
                printf("Enter address, turnover(in cr.) and cost(in cr.) of franchise %d:\n", i + 1);
                scanf("%s %f %f", f[i].address, &f[i].turnover, &f[i].cost);
                f[i].profit = f[i].turnover - f[i].cost;
            }
            data_entered = 1;
            break;

        case 2:
            if (!data_entered)
            {
                printf("No data found. Please enter data first.\n");
                break;
            }
            printf("\nData Found:\n");
            for (i = 0; i < a; i++)
            {
                if (strlen(f[i].address) > 0)
                {
                    char temp[30];
                    strcpy(temp, f[i].address);
                    temp[0] = toupper(temp[0]);
                    printf("Address: %s, Turnover: %.2f cr, Cost: %.2f cr, Profit: %.2f cr\n",
                           temp, f[i].turnover, f[i].cost, f[i].profit);
                }
            }
            break;

        case 3:
            if (!data_entered)
            {
                printf("No data found. Please enter data first.\n");
                break;
            }
            for (i = 0; i < a - 1; i++)
            {
                for (int j = 0; j < a - i - 1; j++)
                {
                    if (f[j].profit < f[j + 1].profit)
                    {
                        info temp = f[j];
                        f[j] = f[j + 1];
                        f[j + 1] = temp;
                    }
                }
            }
            printf("\nData Sorted by Profit:\n");
            for (i = 0; i < a; i++)
            {
                printf("Address: %s, Turnover: %.2f cr, Cost: %.2f cr, Profit: %.2f cr\n",
                       f[i].address, f[i].turnover, f[i].cost, f[i].profit);
            }
            break;

        case 4:
            if (!data_entered)
            {
                printf("No data found. Please enter data first.\n");
                break;
            }
            {
                char address_input[30];
                printf("Enter address of the shop you want the data of: ");
                scanf("%s", address_input);

                // Convert input to lowercase
                for (i = 0; i < strlen(address_input); i++)
                    address_input[i] = tolower(address_input[i]);

                int found = 0;
                for (i = 0; i < a; i++)
                {
                    char temp[30];
                    strcpy(temp, f[i].address);
                    for (int k = 0; k < strlen(temp); k++)
                        temp[k] = tolower(temp[k]);

                    if (strcmp(address_input, temp) == 0)
                    {
                        printf("Address: %s, Turnover: %.2f cr, Cost: %.2f cr, Profit: %.2f cr\n",
                               f[i].address, f[i].turnover, f[i].cost, f[i].profit);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("No franchise found with the given address.\n");
            }
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid option! Please try again.\n");
            break;
        }
    }

    return 0;
}
