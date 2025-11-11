#include <stdio.h>

int geom(int a, int b){
    if (a==0){
        printf("....");
    }
    else
    {
        printf("1/%d + ",b);
        return geom(a-1,b*2);
    }
    
}

int main(){
    int num, base=2;
    printf("Enter how many terms you want to print: ");
    scanf("%d",&num);
    geom(num,base);
    return 0;
}
