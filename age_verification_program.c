#include <stdio.h>


int main() {
   
    int age;
    printf("Enter your age for verification: ");
    scanf("%d",&age);
    printf("Your age is %d \n",age);


    if (age>=18) {
        printf("Access granted");
    }
    else {
        printf("Access denied");
    }


    return 0;
}
