#include<iostream>
#include<windows.h>
using namespace std;
float anyunit(float length, float width, float height, string unit);
main()
{
    float length;
    float width;
    float height;
    string unit;
    cout<<"enter length";
    cin>>length;
    cout<<"enter width";
    cin>>width;
    cout<<"enter height";
    cin>>height;
    cout<<"enter unit";
    cin>>unit;
    float total = anyunit(length, width, height, unit);
    cout<<"the volume of pyramid is :"<<total;


}
  float anyunit(float length, float width, float height, string unit)
  {
    float volume;
    if(unit=="centimeter")
    {
       volume = ((length*100)*(width*100)*(height*100))/3;
       return volume;
    }
    if(unit=="kilometer")
    {
        volume = ((length/1000)*(width/1000)*(height/1000))/3;
        return volume;
    }
    if(unit=="milimeter")
    {
        volume = ((length*1000)*(width*1000)*(height*1000))/3;
        return volume;
    }
  }