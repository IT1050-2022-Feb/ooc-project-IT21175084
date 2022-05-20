#include "Land.h"
#define SIZE1 2
#define SIZE2 2

Land::Land()
{
  
}

Land::Land(int sell1, int sell2, int book1, int book2, Seller* pseller, Buyer* pbuyer, LandManager*                   plandmanager)
{
  sell[0] = new Selling(sell1);
  sell[1] = new Selling(sell2);

  book[0] = new Booking(book1);
  book[1] = new Booking(book2);

  seller = pseller;
  buyer = pbuyer ;
  landmanager = plandmanager;
}


void Land::LandDetails(int LdID, const char LdLocation, double LdPrice, const char LdFacility, double                 LdUtiPrice, Seller* pseller, Buyer* pbuyer, LandManager* landmanager)
{
  
}

void Land::deleteLandDetails()
{
  
}

void Land::updateLandDetails()
{
  
}

void Land::calculateLandPrice();
{
  
}

void Land::displayLdDetails();
{
  
}

void Land::checkAvailability();

Land::~Land()
{
  //destructor
  for(int i = 0; i < SIZE1; i++)
    {
      delete book[i];
    }
  for(int i = 0; i < SIZE2; i++)
    {
      delete sell [i]; 
    }
}