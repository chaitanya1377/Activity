#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[20],strCpy[20],strCat[40],str2[20];
    printf("Enter the string: ");
    scanf("%19s", &str);
    int option,i = 0,j=0;
    while (1)
    {
        printf("Enter the option:\n1. Find the length of the string\n2. Copy the string\n3. Concatenate another string\n4. exit\n");
        scanf("%d",&option);  
        switch (option)
        {
            case 1:
                while (str[i] != '\0') 
                    {
                        i++;
                    }
                    printf("The length = %d\n",i);
                    i=0;
                break;
            case 2:
                    while (str[i] != '\0') 
                    {
                        strCpy[i] = str[i];
                        i++;
                    }
                    strCpy[i]='\0';
                    printf("The copied string is: %s\n", strCpy);
                    i = 0;
                break;
            case 3:
                    printf("Enter the string to concatenate: ");
                    scanf("%19s",&str2);
                    j=0;
                    i=0;
                    while (str[i] != '\0')
                    {
                        strCat[i]=str[i];
                        i++;
                    }
                    while (str2[j]!='\0')
                    {
                        strCat[i]=str2[j];
                        i++;
                        j++;
                    }
                    strCat[i]='\0';
                    printf("The concatenated string is: %s\n",strCat);
                    i=0;
                    j=0;
                    break;
            case 4:
                    exit(0);
            default:
                printf("Error!");
        }

        
    }
    return 0;
}
