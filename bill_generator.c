# include <stdio.h>
# include <string.h> 
void main()
    {
        char id[8];
        printf("Please enter your application ID: ");
        scanf("%s",&id);
        printf("\nPrinting your payment invoice...\n");

        if (strlen(id)==8)
           {
            printf("\n------------------------------------------------------------------------------");
            printf("\n\t\t\tXYZ Entrance Exam");
            printf("\n------------------------------------------------------------------------------");
            printf("\n\nReceipt No.  :  25-26 / 1076");
            printf("\n\nReceipt Date  :  07/10/2025");
            printf("\n\nApplication No.  :  %s",id);
            printf("\n\nName of the Student  :  AMIT MAHAJAN");
            printf("\n\nAmount  :  Rs.1900.00");
            printf("\n\nAmount in Words  :  One Thousand and Nine Hundred  only\n");
            printf("\n------------------------------------------------------------------------------");
            printf("\n\nNOTE: Examination Form Fees is Non-Refundable.\n");
            printf("      This is a computer generated Receipt and does not require a signature.");
            printf("\n\n------------------------------------------------------------------------------");
            }

        else 
            {printf("Please Enter valid ID");}
    }
    
