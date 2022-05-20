#include "Booking.h"
#include "Selling.h"
#include "Seller.h"
#include "Buyer.h"
#include "LandManager.h"
#include "Land.h"
#include "GuestUser.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
#include "Report.h"
#include <iostream>
using namespace std;
int main()
{
 //---- Object creation ------
 GuestUser* rg = new RegisteredCustomer(); // Object -RegisteredCustomer class
 RegisteredCustomer* seller = new Seller(); // Object - seller class
 RegisteredCustomer* buyer = new Buyer(); // Object - buyer class
 Land* lnd = new Land(); // Object - Land class
 Selling* selling = new Selling(); // Object - Selling class
 Booking* booking = new Booking(); // Object - Booking class
 LandManager* landmanager = new LandManager(); // Object - LandManager class
 Report* report = new Report(); // Object - Report class

//----Method Calling------
 rg->login();
 rg->displayDetails();
 seller->login();
 seller->displaySellerDetails();
 buyer->login();
 buyer->displayBuyerDetails();
 lnd->updateLanDetails();
 lnd->checkAvailability();
 selling->addSelling();
 selling->displaySelPrice();
 booking->addBooking();
 booking->displayBookPrice();
 report->bookingDetailsReport();
 report->sellingDetailsReport();
 report->paymentDetailsReport();
  
 //----Delete Dynamic objects------
 delete rg;
 delete seller;
 delete buyer;
 delete lnd;
 delete selling;
 delete booking;
 delete report;
 return 0;
}
