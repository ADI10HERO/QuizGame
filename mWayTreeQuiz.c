#include<stdio.h>

#include<conio.h>

#include<malloc.h>
#include<string.h>

struct node

{

char data[100];

struct o *opt1,*opt2,*opt3,*opt4;



};
struct o
{
 char choice[100];
 struct node *next;

};

struct node *start=NULL;

void create(char ques[],char op1[],char op2[],char op3[],char op4[], int crt)

{
   struct node *p;
   struct node *p1;

   p=(struct node *)malloc(sizeof(struct node));

   if(p==NULL)

   {

     printf("\n Out of memory");
     exit(0);

   }
   if (start==NULL)
    start=p;
    else p=p1;

   p->data=ques;
   p->opt1->choice=op1;
   p->opt2->choice=op2;
   p->opt3->choice=op3;
   p->opt4->choice=op4;
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
}






}









void main()

{

int op,n;
create("what is my name?","Tanvi","T","A","n",1);






clrscr();

do

{  printf("\n WELCOME TO THE QUIZ! \n ALL THE BEST!");

printf("%s");


  /*  printf("\n Enter your choice\n");

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

    default: exit(0);

   }

  }while(op<5);
  */

  getch();



  }
