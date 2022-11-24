#include<stdio.h>
#include<string.h>

int main(void)
{
    char mystrg[60];
    int leng, g;

    
    printf("Program in C for reversing a given string \n ");
    printf("Please insert the string you want to reverse: ");

   
    scanf( "%s", mystrg);
    leng = strlen(mystrg);

    // iterate through each and every character of the string for printing it backwards or reverse direction
    for(g = leng - 1; g >= 0; g--) {
        printf("%c", mystrg[g]);        
    }
    return 0;
}
