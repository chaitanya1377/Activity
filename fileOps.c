#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int option,num,numInFile,newNum;

    while (1)
    {
        printf("Enter Your option:\n1. Store a number\n2. Read the file\n3. Print the file elemets\n4. Change and print the number\n5. Add new number at the end\n6. Exit\n");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            fptr=fopen("number.txt","w");
            printf("Enter the number to be stored:");
            scanf("%d",&num);
            fprintf(fptr,"%d",num);
            fclose(fptr);
            break;
            
        case 2:
            fptr=fopen("number.txt","r");
            printf("Read the file successfully\n");
            break;

        case 3:
            fptr=fopen("number.txt","r");
            fscanf(fptr,"%d",&numInFile);
            printf("The number stored in the file is %d\n",numInFile);
            fclose(fptr);
            break;
            
            case 4:
            fptr=fopen("number.txt","w");
            printf("Enter the number to be stored:");
            scanf("%d",&newNum);
            fprintf(fptr,"%d",newNum);
            fclose(fptr);
            break;
            
            case 5:
            fptr=fopen("number.txt","a+");
            printf("Enter the number to be stored:");
            scanf("%d",&newNum);
            fprintf(fptr,"%d",newNum);
            fclose(fptr);
            break;

        case 6:
            exit(0);

        default:
            printf("Error");
        }
    }
        
    return 0;
}
