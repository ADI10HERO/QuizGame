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
    printf("\n\nQ)%s\n",p->data);
    printf("1)%s\n",p->opt1);
    printf("2)%s\n",p->opt2);
    printf("3)%s\n",p->opt3);
    printf("4)%s\n",p->opt4);
    printf("enter your answer:\t");
    scanf("%d",&chc);
    if(crt==chc)
        flag=1;
    else
        flag=0;
    return flag;
}
int create(char ques[],char op1[],char op2[],char op3[],char op4[], int crt)
{  int flag;
   struct node *p1;
   struct node *p=(struct node *)malloc(sizeof(struct node));
   if (start==NULL){
    start=p;}
    //printf("start = p created");}
    else {
    p=p1;}
    //printf("xD p1 got data");}
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
{int cntr=1,sc=0;
int op,n=5,flag;
printf("\nWELCOME TO THE QUIZ! \nALL THE BEST!\n");
flag = create("Why is it called 'C' & not 'D'?","C stands for code","The inventor's name started with a C","It developed after a language called 'B'","I Thought its C++ no C 0_0",3);
if(flag==1)
{printf("Correct!");
sc++;
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);
    exit(0);
}

flag = create("C was developed at?","IBM","Bell Labs","MIT","Microsoft",2);
if(flag==1)
{printf("Correct!");
sc++;
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);
    exit(0);
}
//Q3
flag = create("Which of these is not a C keyword as per ANSI C ?","externt","volatilen","entert","break",3);
if(flag==1)
{printf("Correct!");
sc++;
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);
    exit(0);
}

//Q4
flag = create("What is ANSI, btw?","Area of Natural and Scientific Interest","American National Standards Institute","American National Standardization Institute","American National Society Of Intellectuals",2);
if(flag==1)
{printf("Correct!");
sc++;
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);
    exit(0);
}

//Q5
flag = create("Which of these concepts is NOT supported by C ?","Pointers","Functions","Strings","Namespace",4);
if(flag==1)
{printf("Correct!");
sc++;
printf("CONGRATULATIONS!\nGreat Work!YOU SCORED %d on %d",sc,n);
exit(0);
}
else if(flag==0){
    printf("Sorry WRONG ANSWER\n'Reading' is the key! Read more and try again\nScore? %d correct out of %d",sc,n);
    exit(0);
}


getch();
}

