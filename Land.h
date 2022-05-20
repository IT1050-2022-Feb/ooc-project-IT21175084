#include "LandManager"

#define SIZE1 2
#define SIZE2 2

class Land{
  private:
    int Land_ID;
    char Land_Location[50];
    double Land_Price;
    char Land_Facilities[50];
    double Land_UtilityPrice;
    int count = 0 ;

    Booking* book[SIZE1];
    Selling* sell[SIZE2];
    Seller* seller;
    Buyer* buyer;
    LandManager* landmanager;
    
  public:
    Land();
    Land(int sell, int sell2, int book1, int book2, Seller* pseller, Buyer* pbuyer, LandManager* plandmanager);
    void LandDetails(int LdID, const char LdLocation, double  LdPrice, const char aptFacility, double  LdUtiprice, const 
    char LdStatus, Seller * pseller, Buyer* pbuyer, LandManager* landmanager);
    void deleteLandDetails();
    void updateLandDetails();
    void calculateLandPrice();
    void displayLdDetails();
    void checkAvailability();
    ~Land();
};