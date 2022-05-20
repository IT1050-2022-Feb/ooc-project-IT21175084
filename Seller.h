#include "RegisteredCustomer.h"
#include "Land.h"
#define SIZE 5
class Seller :public RegisteredCustomer
{
private:
 int noOfLands;
 Land* sellLnd[SIZE];
public:
 Seller();
 Seller(const char usName[], const char usPwd[], int id, const
char name[], const char address[], const char email[], const char
telno[], int pnoOfLands);
 void addSellingLand(Land* psellLnd);
 void login();
 void displaySellerDetails();
 ~Seller();
};
