#include "Land.h"
#define SIZE 5
class LandManager
{
private:
	int LandManagerID;
	char LandManagerName[20];
	char LandManagerEmail[20];
	char LandManagerNumber[10];
	char LandManagerUsername[20];
	char LandManagerPassword[20];

	Land* lnd[SIZE];

public:
	LandManager();
	LandManager(int pLandManagerID, const char pLandManagerName[], const char pLandManagerEmail[], const char pLandManagerNumber[], const char pLandManagerUsername[], const char pLandManagerPassword[]);
	void login(const char LandMngUsername, const char LandMngPassword);
	void manage(Land* plnd);
	~LandManager();

};
