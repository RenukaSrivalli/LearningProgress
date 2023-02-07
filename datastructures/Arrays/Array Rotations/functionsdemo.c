#include<stdio.h>
void fun()
{
printf("hi");
fun1();
}
void fun1()
{
printf("hello");
}
int main()
{
fun();
}
