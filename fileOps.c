#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fptr;
    int option, marks;
    char name[20];


    while (1)
    {
        printf("\nEnter Your option:\n");
        printf("1. Add a student's name and marks in file\n");
        printf("2. Read the file\n");
        printf("3. Print if the student is passed or not (more than 35 marks)\n");
        printf("4. Exit\n");
       
        scanf("%d", &option);


        switch (option)
        {
        case 1:
            fptr = fopen("number.txt", "w");
            printf("Enter the name of the student: ");
            scanf("%s", name);
            printf("Enter the marks (out of 100) of the student: ");
            scanf("%d", &marks);
            fprintf(fptr, "%s %d", name, marks);
            fclose(fptr);
            printf("Data written successfully.\n");
            break;


        case 2:
            fptr = fopen("number.txt", "r");
            fscanf(fptr, "%s %d", name, &marks);
            printf("Student: %s, Marks: %d\n", name, marks);
            fclose(fptr);
            break;


        case 3:
            fptr = fopen("number.txt", "r");
            fscanf(fptr, "%s %d", name, &marks);
            if (marks < 35)
                printf("Student %s has failed with %d marks.\n", name, marks);
            else
                printf("Student %s has passed with %d marks.\n", name, marks);
            fclose(fptr);
            break;


        case 4:
            exit(0);


        default:
            printf("Invalid option.\n");
        }
    }


    return 0;
}
