 // direct way to print fibonacci series through recursion
/*#include<stdio.h>
int fibo(int i)
{
  if (i==0 || i==1)
  return i;
  else
  return fibo(i-1)+fibo(i-2);

}
int main()
{
  int i,n;
  printf("enter number:");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  printf("%d\n",fibo(i));
  return 0;
}*/
// indirect way of recursion to print even or odd
/*#include<stdio.h>
void odd();
void even();
int n=1;
void odd(){
  if(n<=10)
  {
    printf("%d",n+1);
    n++;
    even();
  } return;

void even()
{
  if(n<=10)
  {
    printf("%d",n-1);
    n++;

    odd();
  }
  return;
}
  int main()
  {
    odd();
  }
  return;
  // 

*/
/*#include <stdio.h>
int main()
{
int num = 10;
int *ptr = &num;
printf("value of num: %d\n", num);
printf("value of num: (using pointer): %d\n", *ptr);
*ptr = 20;
printf("value of num: %d\n", num);
printf("value of num (using pointer): %d\n", *ptr);
return 0;}*/


/*#include <stdio.h>
int main()
{
int *ptr = NULL; //null pointer
printf("The value of ptr is: %d",ptr);
return 0;}*/

// void pointer

/*#include<stdio.h>
int main()
{
int a=2;
char b='A';
float f = 3.5f;
void *ptr;
ptr= &a;
printf("Typecasting a = %d\n", *(int *)ptr);
ptr= &b;
printf("Typecasting b = %c\n", *(char *)ptr);
ptr = &f;
printf("Typecasting f = %f", *(float *)ptr);
return 0;}*/




/*#include <stdio.h>
int main()
{
int *p; //wild pointer
printf("%d",*p);
return 0;
}*/



/*#include <stdio.h>
void swap(int *x, int *y)
{
int t;
t = *x;
*x = *y;
*y = t;
printf("x = %d\n",x);
printf("y = %d\n",y);
}
//Call By Reference Example - 1
int main()
{
int a = 10, b = 20;
printf("a = %d\n",a);
printf("b = %d\n",b);
swap(&a, &b);
return 0;}*/


#include<stdio.h>
int main()
{
int number=50;
int *p;
p=&number;
printf("Address of p = %d\n",p);
p = p + 1;
printf("After increment:");
printf("Address of p = %d",p);
return 0;
}



