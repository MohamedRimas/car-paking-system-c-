#include "Monthly.h"
#include <iostream>
#include<cstring>
using namespace std;

Monthly::Monthly()
{
  MRevID=0;
  strcpy(MRevName, "");
  strcpy(MemberName, "");
  strcpy(ContactNO, "");
}



  void Monthly::setMonthlyDetails(int MID,const char MName[],const char cName[], const char cNo[])
{
       MRevID=MID;
       strcpy(MRevName,MName);    
       strcpy(MemberName,cName);
       strcpy(ContactNO,cNo);
      
}
  void Monthly::displayMonthlyDetails()
{
    cout << "Hourly reservation ID: " << MRevID << endl;
    cout << "Resevation Name:  " << MRevName << endl;
    cout << "Customer Name: " <<MemberName<< endl;
     cout << "Contact No:" <<ContactNO<< endl;
    cout << endl;
}

   void Monthly::updateMonthlyDeatils()
   {
     
   }
   
   Monthly::~Monthly()
  {

  }