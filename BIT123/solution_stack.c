//a+b*c
#include<stdio.h>

//create stack using an array on top
struct Stack{
char data[MAX];
int top;
};
struct Stack s;

//push used for incrementing the top value eg;0-->1 and
//stores value of 1 in character
void push(char ch){
    s.top++;
    s.data[s.top]=ch;}


//pop used for accessing top element of the stack eg;s.data[s.top]; decrement the top pointer
//removes the element and returns the top character
char pop(){
char ch;
ch=s.data[s.top];
s.top--;
return ch;
}
//returns top element without removing it from the stack
char peek(){
return s.data[s.top];}

int precedence(char ch){
if (ch=='*'||ch=='/')
    return 2;
    else if(ch=='+'||ch=='-')
    return 2;



 }
 while(s.top!=-1 && precedence(s.data[s.top])>=precedence(ch))
 {

     postfix[j]=pop();
     j++;
 }
 postfix[j]='\0';
 printf("Postfix expression :%s,postfix");
 return 0;

}




