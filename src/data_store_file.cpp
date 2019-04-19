#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../includes/data_store_file.h"

using namespace std;

DataStore_File::DataStore_File(std::string fileName, Crypto* crypto = 0){

}

DataStore_File::~DataStore_File(){

}

bool load(std::vector<String_Data> &myVector){
	return true;
}

bool save(std::vector<String_Data> &myVector){
	return true;
}

bool openFile(std::fstream& myfile,const std::string& myFileName, std::ios_base::openmode mode=std::ios_base::in){
    myfile.open(myFileName, mode);
    if (!myfile.is_open()){
        return false;
    }
    return true;
}

void closeFile(std::fstream& myfile){
    if (!myfile.is_open()){
        return;
    }
    myfile.close();
}
