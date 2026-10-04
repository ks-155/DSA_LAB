

#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int roll_numbers;
    char address[50];
};
void main(){
    struct student student1= {"Krish",123,"Himatnagar"};
    struct student student2= {"Soham",109,"Kadi"};
    struct student student3= {"Vatsalya",70,"Rajkot"};

    printf("%s\n",student1.name);
    printf("%d\n",student1.roll_numbers);
    printf("%s\n",student1.address);

    printf("%s\n",student2.name);
    printf("%d\n",student2.roll_numbers);
    printf("%s\n",student2.address);

    printf("%s\n",student3.name);
    printf("%d\n",student3.roll_numbers);
    printf("%s\n",student3.address);



   

    

    }


 
    // int n=100;
    // int arr1[]={1,2};
    // printf("%d\n",sizeof(n));
    // printf("%d\n",sizeof(arr1));
    //  printf("%d",sizeof(struct student));

// typedef struct type {
//     char name[30];
//     int roll_numbers[100];
//     char address[500];


// }Student;
// int main(){
//     Student students[3]={
//     {"Krish",123,"Himatnagar"},
//     {"Vatsalya",70,"Rajkot"},
//     {"Soham",109,"Kadi"}
//     };
//     // printf("%s",students[2].name);
//     printf("details of students--->");
  
//     for(int i=0;i<3;i++){
//         printf("%s\t",students[i].name);
//         printf("%d\t",students[i].roll_numbers[0]);
//         printf("%s\t\n",students[i].address);
        
//             }
    
    

    // printf("details of students--->");
    // for(int i=0;i<3;i++){
    //     printf("\nStudent %d\n",i+1);
    //         }

