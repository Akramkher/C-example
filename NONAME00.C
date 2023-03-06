#include<stdio.h>
#include<conio.h>
void main()
{
int num,fd,sd;
clrscr();
printf("\n\t enter two digit numbers:");
scanf("%2d",&num);
fd= num / 10;
sd= num | 10;
if(fd==sd)
printf("\n\n\t palindrome");
else
printf("\n\n\t not a palindrome");
getch();
}