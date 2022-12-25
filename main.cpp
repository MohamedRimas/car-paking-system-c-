#include<iostream>
#include<cstring>
#include "customer.h"
#include"payment.h"
#include"ParkLocation.h"
#include "Hourly.h"
#include "Monthly.h"
#include "Admin.h"
#include "Report.h"
#include "Feedback.h"
#include "Inquiry.h"

using namespace std;

int main()
{

cout<<"Unregistered Customers " <<endl<<endl;
  Unregistered_customer UC1("Sam", "sam@yahoo.com", "0717777770", "11111");
  UC1.displayunregDetails();
   Unregistered_customer UC2("Jason", "jason@gmail.com", "0717777770", "22222");
  UC2.displayunregDetails();
   Unregistered_customer UC3("Dinuka", "dinuka@yahoo.com", "0776543210", "33333");
  UC3.displayunregDetails();
   Unregistered_customer UC4("Dihini", "dihini@hotmail.com", "0767865432", "44444");
  UC4.displayunregDetails();
cout<<"--------------------------------"<<endl;
  
  
  cout<<"Registered Customers " <<endl<<endl;
  Registered_customer RC1("RG001", "ryan@yahoo.com", "zxcv8n7", 100.00);
  RC1.displayregDetails();
   Registered_customer RC2("RG002", "thilini@gmail.com", "as3h6gf", 150.00 );
  RC2.displayregDetails();
   Registered_customer RC3("RG003", "shenal@gmail.com", "qwe6rty", 100.00);
  RC3.displayregDetails();
   Registered_customer RC4("RG004", "tharani@hotmail.com", "wsde5rf", 125.00);
  RC4.displayregDetails();
  cout<<"--------------------------------"<<endl;
  
  Payment pay;
  pay.payment(12,(char*)"PayPal",(char*)"Done");
  pay.displayPaymentDetails();

  cout<<"--------------------------------"<<endl;

  ParkLocation parkL;
  parkL.parkLocation(0001,(char*)"NugegodaPark", (char*)"Nugegoda Highlevel Rd, Nugegoda", 500.00);
  parkL.displayLocationDetails();
  cout<<"--------------------------------"<<endl;

  Hourly h1,h2;
 

    h1.setHourlyDetails(1001, "Nugegoda Park","Dihini", "0767765432");
    h2.setHourlyDetails(1002, "TownHall", "Dinuka","0776543210");
   
    h1.displayHourlyDetails();
    h2.displayHourlyDetails();
cout<<"--------------------------------"<<endl;

    Monthly m1,m2;
 

    m1.setMonthlyDetails(1011, "Nugegoda Park","Ann", "076765389");
    m2.setMonthlyDetails(1022, "Mall Center Nugegoda","Janithi","0712543890");
  
    m1.displayMonthlyDetails();
    m2.displayMonthlyDetails();
    cout<<"--------------------------------"<<endl;
  
  Report rpNo;
	rpNo.Reports(4197392, (char*)"CUSTOMR REPORTS");
	rpNo.displayReport(); 

	cout << "\n" << endl;
	cout << "--------------------------------" << endl;

	Admin ADNo;
	ADNo.Admins(4, (char*)"Nimal");
	ADNo.displayAdmin();
	cout << "\n" << endl;
	cout << "--------------------------------" << endl;

  
 Feedback fb;
  fb.feedback(17, (char*)"Saman Perera", (char*)"samanPerera@gmail.com", (char*)"Great Solution"); //Create Feedback object
  fb.displayFeedback(); //Display Feedback

  cout << "\n" << endl;
  
  Inquiry inq;
  inq.enquire((char*)"Dasun Nethsara", 717128328, (char*)"Nethsara@gmail.com", (char*)"Change Password"); //Create Inquiry object
  inq.displayEnquire(); //Display Inquiry


    char ch;
    cin>>ch;


  return 0;

}
