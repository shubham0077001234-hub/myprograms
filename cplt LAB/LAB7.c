#include<conio.h>
#include<stdio.h>
/*do while loop
\do(condition)
{
\\statment......\\
\\}
while(condition)
*/
void main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=10);
    getch();
}