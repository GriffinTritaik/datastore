#include <string>
#include <vector>

#include "../includes/data_store.h"

using namespace std;

bool decrypt(std::string &myString){
	return true;
}
bool encrypt(std::string &myString){
	return true;
}

DataStore::DataStore(Crypto *pCrypt = 0): myCrypto(myCrypto)
{

}

DataStore::~DataStore(){

}
