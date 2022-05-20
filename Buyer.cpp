#include "Buyer.h"
Buyer::Buyer()
{
noOfLands = 0;
}
Buyer::Buyer(const char usName[], const char usPwd[], int id, const
char name[], const char address[], const char email[], const char telno[], int pnoOfLands):RegisteredCustomer(usName,usPwd, id, 
name, address, email, telno)
{
noOfLands = pnoOfLands;
}
void Buyer::addBuyingLand(Land* pbuyLnd)
{
if (noOfLands < SIZE)
{
buyLnd[noOfLands] = pbuyLnd;
noOfLands++;
}
}
void Buyer::login()
{
}
void Buyer::displayBuyerDetails()
{
}
Buyer::~Buyer()    //Destructor
{
for (int i = 0; i < SIZE; i++)
      	{
           	delete buyLnd[i];
       	}
}

