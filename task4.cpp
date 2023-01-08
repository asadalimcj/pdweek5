#include<iostream>
using namespace std;
void firm(int hour, int day, int worker);
main()
{
  int hour, day, worker;
  cout<<"enter hours :";
  cin>>hour;
  cout<<"enter days :";
  cin>>day;
  cout<<"enter number of worker :";
  cin>>worker;
  firm(hour, day, worker);



}
   void firm(int hour, int day, int worker)
   {
    int total_hour = day*10;
    float percentage = total_hour*0.1;
    int result1 = total_hour-percentage;
    int result2 = result1*worker;
    int final = result2-hour;
    if(final>hour)
    {
        cout<<"yes: "<<final<<" hour are left"<<endl;
    }
    if(final<hour)
    {
        cout<<"no enough time: "<<final*-1<<" hour are needed for work"<<endl;
    }
   }