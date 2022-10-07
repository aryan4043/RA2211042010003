#include <stdio.h>
#include<stdlib.h>

int main(){
    char sentence[1000]
    
    FILE*fptr;
    
    fptr=fopen("program .txt","W")
    
    if(fptr==NULL){
    printf("ERROR!");
    exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence,sizeof(sentence),stdin):
    fprintf(fptr,"% , sentence);
    fclose(fptr);
    return 0;
    }
