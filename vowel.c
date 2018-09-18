#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char a;
scanf("%c",&a);
if(isalpha(a))
{
if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u')
printf("Vowel");
else
printf("Consonant");
}
else
printf("invalid");
}
