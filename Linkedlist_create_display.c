#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    //defining user defined data type
    struct node{
        int data;
        struct node*next;
    
    };
    struct node *head;
    struct node *newnode;
    struct node *temp;
    head=0;
    int choice=1;
    //structnode* for typecasting and malloc()for dynamic memory allocation
     while(choice){
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
   
        if(head==0){    
            head=temp=newnode;      //used temp to save ll from being destroyed at previous node
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to codntinue(0,1)?"); //asking user if he want to enter another numbers in ll
        scanf("%d",&choice);
        
    }
     temp=head;
   
     //traversing the list of user entered data of ll
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    getch();
   
  
}
