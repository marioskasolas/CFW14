#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Δήλωση μεταβλητών
    char c,buffer[100];
    int i = 0,ctr = 0,ct = 0;

    //άνοιγμα αρχείων
    FILE *fp;
    fp = fopen("C:/Users/mario/OneDrive/Desktop/isafile.txt","r"); if(fp == NULL) exit(10);

    //Έισοδος data
    printf("Please enter the word its occurance you want to find :");
    gets(buffer);

    for(int i = 0;buffer[i] !='\0';i++) ctr++;

    //Υλοποιήση ελέγχου
    while((c = fgetc(fp)) != EOF){
        if(buffer[i] == c){
            if(i == (ctr-1)){ct++; i=0;printf("found!");}
            else i++;
        }
        else i = 0;

    }

    printf("The word you gave occured this many times :%d",ct);
    fclose(fp);
    return 0;
}