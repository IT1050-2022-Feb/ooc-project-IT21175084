#include "Seller.h"
Seller::Seller()
{
noOfLands = 0;
}
Seller::Seller(const char usName[], const char usPwd[], int id, 
const char name[], const char address[], const char email[], const
char telno[], int pnoOfLands) :RegisteredCustomer(usName, 
usPwd, id, name, address, email, telno)
{
noOfLands = pnoOfLands;
}
void Seller::addSellingLand(Land* psellLnd)
{
if (noOfLands < SIZE)
{
sellLnd[noOfLands] = psellLnd;
noOfLands++;
}
}
void Seller::login()
{
}
void Seller::displaySellerDetails()
{
}
Seller::~Seller()   //Destructor 
{
}

