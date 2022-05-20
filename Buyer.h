#include "RegisteredCustomer.h"
#include "Land.h"
#define SIZE 5
class Buyer : public RegisteredCustomer
{
private:
 int noOfLands;
 Land* buyLnd[SIZE];
public:
 Buyer();
 Buyer(const char usName[], const char usPwd[], int id, const
char name[], const char address[], const char email[], const char
telno[],int pnoOfLands);
 void addBuyingLand(Land* pbuyLnd);
 void login();
 void displayBuyerDetails();
 ~Buyer();
};
