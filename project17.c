#include<string.h>
#include<stdio.h>

char * getSingle(int number);
char * getDouble(int number);
char * getTriple(int number);
int  main(){
    char * test = getTriple(734);
    printf("**%s**",test);

}

char * getSingle(int number){
    switch (number){
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
    char str[80];
    int first_number = number%10;
    int second_number = (number/10)%10;
    memset(str, '\0', sizeof(str));


//    printf("**** %s\n",getSingle(first_number));
//    printf("---%s\n",strcat(str,"thirty"));
    switch (number){
        case 11:
            return "eleven";
        case 12:
            return "twelve";
        case 13:
            return "thirteen";
        case 14:
            return "fouteen";
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "eighteen";
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
         //   printf("~~%s\n",strcat(str, getSingle(first_number)));
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
    char str [80];
    memset(str, '\0', sizeof(str));

//    printf("}}%s",getDouble(f_n));o
    switch (s_n){
        case 1:
            strcpy(str,"onehundredand");
            return strcat(str, getDouble(f_n));
        case 2:
            strcpy(str,"twohundredand");
            return strcat(str, getDouble(f_n));
        case 3:
            strcpy(str,"threehundredand");
            return strcat(str, getDouble(f_n));
        case 4:
            strcpy(str,"fourhundredand");
            return strcat(str, getDouble(f_n));
        case 5:
            strcpy(str,"fivehundredand");
            return strcat(str, getDouble(f_n));
        case 6:
            strcpy(str,"sixhundredand");
            return strcat(str, getDouble(f_n));
        case 7:
            strcpy(str,"sevenhundredand");
   //         printf("getting number %d\n",f_n);
            return strcat(str, getDouble(f_n));
        case 8:
            strcpy(str,"eighthundredand");
            return strcat(str, getDouble(f_n));
        case 9:
            strcpy(str,"ninehundredand");
   //        printf(">>%s",strcat(str, getDouble(f_n)));
            return strcat(str, getDouble(f_n));
        case 0:
            return getDouble(f_n);
    }
    return "++++++++++++++++++";

}
