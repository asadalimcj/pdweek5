#include<iostream>
#include<windows.h>
using namespace std;

int x = 10;
void myfunction()
{
  cout<<"the value of x is :"<<x;
  int x = 20;
}
main()
{
  myfunction();
  int x =30;
  cout<<"the value is :"<<x;
  myfunction(); 
}








