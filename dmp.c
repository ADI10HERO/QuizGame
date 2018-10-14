#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>

struct node{
char *data;
char *opt1,*opt2,*opt3,*opt4;
struct node *next;
};
struct node *start=NULL;
int disp(struct node *p, int crt){
    int chc,flag;
    printf("Q)%s\n",p->data);
    printf("1)%s\n",p->opt1);
    printf("2)%s\n",p->opt2);
    printf("3)%s\n",p->opt3);
    printf("4)%s\n",p->opt4);
    printf("enter your answer");
    scanf("%d",&chc);
    if(crt==chc)
        flag=1;
    else
        flag=0;
    return flag;
    /*switch chc:
    {case 1:
    p->opt1-next=p1;
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
    }*/
}
int create(char ques[],char op1[],char op2[],char op3[],char op4[], int crt)
{  int flag;
   struct node *p1;
   struct node *p=(struct node *)malloc(sizeof(struct node));
   if (start==NULL){
    start=p;}
    //printf("start = p created");}
    else {
    p=p1;
    printf("xD p1");}
   p->data=ques;
   p->opt1=(op1);
   p->opt2=(op2);
   p->opt3=(op3);
   p->opt4=(op4);
   start->next=p;
   p->next=p1;
   flag = disp(p,crt);
return flag;
}
void main()
{int sc=0;
int op,n=4,flag;
printf("\nWELCOME TO THE QUIZ! \nALL THE BEST!");
flag = create("what is my name?","Tanvi","T","A","N",1);
if(flag==1)
{printf("Correct!");
sc++;
 //next();
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);

}
getch();
}

