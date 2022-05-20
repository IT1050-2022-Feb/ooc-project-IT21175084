#include "LandManager.h"
#include <cstring>

LandManager::LandManager()
{
    LandManagerID = 0;
    strcpy(LandManagerName "");
    strcpy(LandManagerEmail "");
    strcpy(LandManagerNumber "0000000000");
    strcpy(LandManagerUsername "");
    strcpy(LandManagerPassword "");
}

LandManager::LandManager(int pLandManagerID, const char pLandManagerName[], const char pLandManagerEmail[], const char pLandManagerNumber[], const char pLandManagerUsername[], const char pLandManagerPassword[])
{
    LandManagerID = pLandManagerID;
    strcpy(LandManagerName, pLandManagerName);
    strcpy(LandManagerEmail , pLandManagerEmail);
    strcpy(LandManagerNumber, pLandManagerNumber);
    strcpy(LandManagerUsername , pLandManagerUsername);
    strcpy(LandManagerPassword , pLandManagerPassword);
}

void LandManager::login(const char LandmngUsername, const char LandmngPassword)
{

}
void LandManager::manage(Land* plnd)
{

}
LandManager::~LandManager()
{
    //Destructor
    for (int i = 0, i < SIZE; i++)
    {
        delete lnd[i];
    }
}
