#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char * getSingle(int number);
char * getDouble(int number);
char * getTriple(int number);
int  main() {
    char * total;
    unsigned long number = 0;
    char * aux;

    int i;
    for(i=1;i<=1000;i+=1){
       aux = getTriple(i);
       number +=strlen(aux);
     }
     printf("%lu\n",number);
}

char * getSingle(int number){
    switch (number){
        case 0:
            return "";
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
    }

    return "__________________________";
}

char * getDouble(int number){
    char * str;
    int first_number = number%10;
    int second_number = (number/10)%10;
    str = (char *) malloc(80);
    memset(str, '\0',80);

    switch (number){
        case 10:
            return "ten";
        case 11:
            return "eleven";
        case 12:
            return "twelve";
        case 13:
            return "thirteen";
        case 14:
            return "fourteen";
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "seventeen";
        case 18:
            return "eighteen";
        case 19:
            return "nineteen";
    }

    switch (second_number){
        case 2:
            strcpy(str,"twenty");
            return strcat(str, getSingle(first_number));
        case 3:
            strcpy(str,"thirty");
            return strcat(str, getSingle(first_number));
        case 4:
            strcpy(str,"forty");
            return strcat(str, getSingle(first_number));
        case 5:
            strcpy(str,"fifty");
            return strcat(str, getSingle(first_number));
        case 6:
           strcpy(str,"sixty"); 
            return strcat(str, getSingle(first_number));
        case 7:
            strcpy(str,"seventy");
            return strcat(str, getSingle(first_number));
        case 8:
            strcpy(str,"eighty");
            return strcat(str, getSingle(first_number));
        case 9:
            strcpy(str,"ninety");
            return strcat(str, getSingle(first_number));
        case 0:
            return getSingle(first_number);

    }

    return "------------------";
}

char * getTriple(int n){
    int f_n = n%100;
    int s_n = (n/100)%100;
    char * str;
    str = malloc(80);
    memset(str, '\0',80);

    switch (s_n){
        case 1:
            strcpy(str,f_n==0?"onehundred":"onehundredand");
            return strcat(str, getDouble(f_n));
        case 2:
            strcpy(str,f_n==0?"twohundred":"twohundredand");
            return strcat(str, getDouble(f_n));
        case 3:
            strcpy(str,f_n==0?"threehundred":"threehundredand");
            return strcat(str, getDouble(f_n));
        case 4:
            strcpy(str,f_n==0?"fourhundred":"fourhundredand");
            return strcat(str, getDouble(f_n));
        case 5:
            strcpy(str,f_n==0?"fivehundred":"fivehundredand");
            return strcat(str, getDouble(f_n));
        case 6:
            strcpy(str,f_n==0?"sixhundred":"sixhundredand");
            return strcat(str, getDouble(f_n));
        case 7:
            strcpy(str,f_n==0?"sevenhundred":"sevenhundredand");
            return strcat(str, getDouble(f_n));
        case 8:
            strcpy(str,f_n==0?"eighthundred":"eighthundredand");
            return strcat(str, getDouble(f_n));
        case 9:
            strcpy(str,f_n==0?"ninehundred":"ninehundredand");
            return strcat(str, getDouble(f_n));
        case 10:
            return "onethousand";
        case 0:
            return getDouble(f_n);
    }
    return "++++++++++++++++++";

}
