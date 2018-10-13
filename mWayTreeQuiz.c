#include<stdio.h>

#include<conio.h>

#include<malloc.h>
#include<string.h>

struct node

{

char data[100];

struct node *opt1,*opt2,*opt3,*opt4;

};

struct node *root;

void create()

{
   struct node *p;

   p=(struct node *)malloc(sizeof(struct node));

}









void main()

{

int op,n;

root=(struct node *)malloc(sizeof(struct node));





clrscr();

do

{  printf("\n WELCOME TO THE QUIZ! \n ALL THE BEST!");



    printf("\n Enter your choice\n");

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

  getch();



  }
