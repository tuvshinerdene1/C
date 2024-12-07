#include<stdio.h>
#include<string.h>
#include<time.h>

int main(){
    char LastName[50];
    char FirstName[50];
    char date[50];
    int age;
    char color[20];
    char hobby[100];
    char freeTime[100];

    puts("Tanii owog?");gets(LastName);
    puts("Tanii ner?"); gets(FirstName);
    puts("Tanii tursun on sar udur?");gets(date);
    puts("Durtai ungu?");gets(color);
    puts("Hobby?");gets(hobby);
    puts("Chuluut tsagaaraa yu hiideg we?");gets(freeTime);
    

    //Hereglegc "date" string iin haana ni ch onoo oruulsan baij boloh tul oniig ni bodoj olj baina:
    int dateInt=0 ;

    for(int i = 0; i < 44; i++){
        int length = 0;
        if((int)date[i]>=48 && (int)date[i]<=57){
            for(int j = i ; j < 50; j++){
                if (!((int)date[j]>=48 && (int)date[j] <=57)){
                    break;
                }
                length ++;
            }
        }

        if(length == 4){
            for(int k = 0 ; k < 4 ; k++){
                dateInt = dateInt*10 + (int)date[i+k]-48;
            }
            break;
        }
    }


    //nasiig ni tuhuurumjiin tsag deer tulguurlan bodoj olj baina:
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    age = tm.tm_year + 1900 - dateInt;

    printf("%s ovogtoi %s ni %s udur tursun. Odoo %d nastai.\n", LastName, FirstName, date, age);
    printf("Tuunii durtai ungu ni %s . Ter chuluut tsagaaraa %s hiideg. Tuunii hobby bol %s", color, freeTime, hobby);
    return 0;
}