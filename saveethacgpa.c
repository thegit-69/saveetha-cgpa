#include<stdio.h>
int i,n;
int input()
{
    printf("Enter TOTAL RESULT DECLARED SUBJECTS = ");
    scanf("%d",&n);
    printf("\n");
    return n;
}
int score()
{
    int ns,na,nb,nc,nd,ne,nf;
    int score;
    printf("If you didn't get the following grade please enter 0");
    printf("\nEnter no. of S GRADES = ");
    scanf("%d",&ns);
    printf("\nEnter no. of A GRADES = ");
    scanf("%d",&na);
    printf("\nEnter no. of B GRADES = ");
    scanf("%d",&nb);
    printf("\nEnter no. of C GRADES = ");
    scanf("%d",&nc);
    printf("\nEnter no. of D GRADES = ");
    scanf("%d",&nd);
    printf("\nEnter no. of E GRADES = ");
    scanf("%d",&ne);
    printf("\nEnter no. of F GRADES = ");
    scanf("%d",&nf);
    score=((ns*10*4)+(na*9*4)+(nb*8*4)+(nc*7*4)+(nd*6*4)+(ne*5*4)+(nf*0*4));
    return score;
}
int main()
{
    float cgpa;
    int x;
    char name[20];
    printf("*====SAVEETHA CGPA CALCULATOR====*\n");
    printf("Enter your name without spaces please : ");
    scanf("%s",&name);
    x=input();
    cgpa=(float)score()/(x*4);
    printf("\n%s your cgpa is %.1f\n",name,cgpa);
    printf("\n:) Thank you %s for using this program\nby DASARATH.C",name);
    return 0;
}