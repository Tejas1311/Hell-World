#include<stdio.h>
#include<conio.h>


void printline();
void printtej();

int main()
{
char i,t,r;
int a,b;

printline();
printf("\n\n**WELCOM TO TEJAS'S PROGRAM \n\n");
printline();

printf("\n Enter 1st number:- ");
scanf("%d",&a);

printf("\n Enter 2st number:- ");
scanf("%d",&b);

do
{
    printf("\n Let's start with ARTHMETIC operator");

    printtej();
    printf(" \n Enter any one operator from given below \n 1) '+' \n 2) '*' \n 3) '/'  \n 4) '-'  \n 5) '%' :-\nYOUR CHOICE:- ");
    scanf(" %c",&i);
    printtej();

    switch(i)
    {
        case '+': printf("\n Ans is %d",a+b);
                  break;
        case '*': printf("\n Ans is %d",a*b);
                  break;
        case '/': printf("\n Ans is %f",(float)a/b);
                  break;
        case '-': printf("\n Ans is %d",a-b);
                  break;
        case '%': printf("\n Ans is %d",a%b);
                  break;
        default:
                printf(" \n Invalid choice  ");

    }
    printf("\n Press Y if you want do it again.....");
    scanf("%c",&t);
   // if(t=='@')  //for leaving this programme
     //   exit(0);

}while(t=='y'||t=='Y');

printf("\n Do you want or show more operaters ? \n press Y if yes :- ");
scanf("%c",&r);
char j;
t=0;
if(r=='y'||r=='Y')
{
    do
    {

    printf("\n Now we are going show Bitwise operator  ");

     printtej();
    printf(" \n Enter any one operator from given below \n 1) '&' \n 2) '|' \n 3) '^'  \n 4) '<<'  \n 5) '>>' :-\nYOUR CHOICE:- ");
     scanf("%c",&j);
    printtej();

      switch(j)
    {
        case '&': printf("\n Ans is %d",a&b);
                  break;
        case '|': printf("\n Ans is %d",a|b);
                  break;
        case '^': printf("\n Ans is %d",a^b);
                  break;
        case '<<': printf("\n Ans is %d",a<<b);
                  break;
        case '>>': printf("\n Ans is %d",a>>b);
                  break;
        default:
                printf(" \n Invalid choice  ");
    }
    printf("\n Press Y if you want do it again.....");
     scanf("%c",&t);

}while(t=='y'||t=='Y');

}

r=0,j=0,t=0;
printf("\n Do you want or show more operaters ? \n press Y if yes :- ");
scanf("%c",&r);

if(r=='y'||r=='Y')
{
    printf("\n now size of operator:");
      printtej();
    printf(" \n Enter name of variable you want to show size \n 1) 'a'(integer) \n 2) 'b'(integer) \n 3) 'i' (character) :-\nYOUR CHOICE:- ");
     scanf("%c",&j);
    printtej();

        switch(j)
    {
        case 'a': printf("\n Ans is %d",sizeof(a));
                  break;
        case 'b': printf("\n Ans is %d",sizeof(b));
                  break;
        case 'i': printf("\n Ans is %d",sizeof(i));
                  break;
        default:
                printf(" \n Invalid choice  ");
                break;

    }
    printf("\n Press Y if you want do it again.....");
    scanf("%c",&t);

}while(t=='y'||t=='Y');

}

void printline()
{
    int i;
    for(i=0;i<=40;i++)
    printf("-");
}
void printtej()
{
    int i;
    for(i=0;i<=40;i++)
    printf("+");
}
