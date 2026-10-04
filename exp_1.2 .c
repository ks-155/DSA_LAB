#include<stdio.h>

struct Student{
    char name[30];
    int roll_numbers[];
    char address[100];


}
int main(){
    struct Student students[3]={
    {"Alice",123,"40 Kaster space"},
    {"Finland",111,"2A jane street"},
    {"Dubai",100,"Alex park,F space"}
    };
printf("details of students--->");
for(int i=0;i<3;i++){printf("\nStudent %d\n",i+1)

    };



//printf(student.names);


}
