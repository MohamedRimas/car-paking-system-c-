#include<iostream>
#include<cstring>
#include"payment.h"
using namespace std;


void Payment::payment(int pP_ID, char pP_Type[], char pP_Status[]){

   p_ID = pP_ID;
  strcpy (p_Type ,pP_Type);
  strcpy(p_Status ,pP_Status);
}
void Payment::displayPaymentDetails(){
  cout<<"Payment ID: "<<p_ID<<endl;
  cout<<"Payment Type: "<<p_Type<<endl;
  cout<<"Payment Status: "<<p_Status<<endl;
}

void Payment::getUpdatePaymentDetails()
{

}