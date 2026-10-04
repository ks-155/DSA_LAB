#include<stdio.h>

struct student {
    int rollno;
    char name[20];
    char address[30];
};

int main()
{

    struct student s[3] = {
        {10, "alex", "Mexico"},
        {11, "Subham", "Jamaica"},
        {12, "Ken", "Hiroshima"}
    };

    for(int i=0; i<3; i++) {
        printf("\n Student %d \n", i+1);
        printf("Roll Number = %d\n", s[i].rollno);
        printf("Name = %s\n", s[i].name);
        printf("Address = %s\n", s[i].address);
    }

    return 0;
}
