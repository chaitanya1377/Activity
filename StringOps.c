#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[20], password[20], username[25];
    int count = 0, a = 0, randomNumber[4];

    randomNumber[4] = '\0';
    srand(time(NULL));
    char randomStr[5];
    for (int i = 0; i < 4; i++)
    {
        int digit = rand() % 10;
        randomNumber[i] = '0' + digit;
    }

    printf("Enter the first name: ");
    scanf("%19s", &name);
    printf("Enter the password: ");
    scanf("%19s", &password);

    while (password[count] != '\0')
    {
        count++;
    }
    if (count < 8)
    {
        printf("Please enter at least 8 characters\nTry again to Sign Up");
    }
    else
    {
        printf("Welcome %s\n", name);

        count = 0;

        while (name[count] != '\0')
        {
            username[count] = name[count];
            count++;
        }
        while (a < 4)
        {
            username[count] = randomNumber[a];
            a++;
            count++;
        }
        username[count] = '\0';

        printf("Your Username is: %s\n", username);
    }
    count = 0;
    a = 0;
    return 0;
}
