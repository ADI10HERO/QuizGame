#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

struct node
{
char *data;
struct o *opt1,*opt2,*opt3,*opt4;
struct node *next;
};
struct o
{
 char *choice;
 //struct o *next;
 struct node *next;
};
void disp(struct node *p);
struct node *start=NULL;

void create(char ques[],char op1[],char op2[],char op3[],char op4[], int crt)
{
   struct node *p1;
   struct node *p=(struct node *)malloc(sizeof(struct node));
   if(p==NULL)//memo check
   {
     printf("\n Out of memory");
     exit(0);
   }
   if (start==NULL){
    start=p;
    printf("start = p created");}
    else {p=p1;
    printf("xD p1");}

   p->data=ques;
   printf(p->data);
   p->opt1->choice=(op1);
   printf(p->opt1->choice);
   p->opt2->choice=(op2);
   printf(p->opt2->choice);
   p->opt3->choice=(op3);
   printf(p->opt3->choice);
   p->opt4->choice=(op4);
   printf(p->opt4->choice);
   printf("data assigned");

switch(crt)
{
case 1:
     p->opt1->next=p1;
      p->opt2->next=NULL;
       p->opt3->next=NULL;
        p->opt4->next=NULL;
     break;
case 2:
      p->opt1->next=NULL;
      p->opt2->next=p1;
       p->opt3->next=NULL;
        p->opt4->next=NULL;
     break;
case 3:
       p->opt1->next=NULL;
      p->opt2->next=NULL;
       p->opt3->next=p1;
        p->opt4->next=NULL;
     break;
case 4:
      p->opt1->next=NULL;
      p->opt2->next=NULL;
      p->opt3->next=NULL;
      p->opt4->next=p1;
     break;
}
printf("reached disp");
disp(p);
}
void disp(struct node *p){
    printf("Q)%s\n",p->data);
    printf("1)%s\n",p->opt1);printf("2)%s\n",p->opt2);printf("3)%s\n",p->opt3);printf("4)%s\n",p->opt4);
}
void main()
{
int op,n;
create("what is my name?","Tanvi","T","A","N",1);
printf("\n Enter your choice\n");
printf("\n WELCOME TO THE QUIZ! \n ALL THE BEST!");
do{
scanf("%d",&op);
  switch (op)
   {
    case 1: printf("\n ");
              break;
    case 2: printf("\n \n");
              break;
    case 3: printf("\n \n");
              break;
    case 4: printf("\n \n");
              break;
    default: printf("Enter 5 to exit");
    break;
   }
  }while(op<5);
getch();
}

