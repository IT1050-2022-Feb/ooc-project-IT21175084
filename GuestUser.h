#include "Land.h"
class GuestUser{
  protected:
    int Customer_ID;
    char Customer_name[20];
    char Customer_address[30];
    char Customer_email[30];
    char Customer_phonenumber[10];

  public:
    GuestUser();
    GuestUser(int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[],     
    const char custPHno[]);
    void searchLands(Land * pLnd);
    void RegisterUser();
    virtual void displayDetails();
    ~GuestUser();
};