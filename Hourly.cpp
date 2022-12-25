#include "Hourly.h"
#include <iostream>
#include<cstring>
using namespace std;

Hourly::Hourly()
{
  HRevID=0;
  strcpy(HRevName, "");
  strcpy(CustomerName, "");
  strcpy(ContactNo, "");
}



void Hourly::setHourlyDetails(int H_ID,const char hName[],const char cName[], const char cNo[])
{
       HRevID=H_ID;
       strcpy(HRevName,hName);    
       strcpy(CustomerName,cName);
       strcpy(ContactNo,cNo);
      
}
  void Hourly::displayHourlyDetails()
{
    cout << "Hourly reservation ID: " << HRevID << endl;
    cout << "Resevation Name:  " << HRevName << endl;
    cout << "Customer Name: " <<CustomerName<< endl;
     cout << "Contact No:" <<ContactNo<< endl;
    cout << endl;
}

   void Hourly::updateHourlyDeatils()
   {
     
   }
   
   Hourly::~Hourly()
  {

  }