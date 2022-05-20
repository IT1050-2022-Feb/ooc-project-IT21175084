#include "GuestUser.h"
#include <cstirng>

GuestUser::GuestUser()
{
  Customer_ID = 0 ;
  strcpy(Customer_name,"");
  strcpy(Customer_address,"");
  strcpy(Customer_email,"");
  strcpy(Customer_phonenumber,"0000000000");
}

GuestUser::GuestUser(int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[], const char custPHno[])
{
  custID = pcustid;
  strcpy(customer_name, pcustName);
  strcpy(customer_address, pcustAddress);
  strcpy(customer_email, pcustEmail);
  strcpy(customer_phonenumber, custPHno);
}

void GuestUser::searchLand(Land * pld)
{
  
}

void GuestUser::RegisterUser()
{
  
}

void GuestUser::displayDetails()
{
  
}

GuestUser::~GuestUser()
{
  //Destructors
}