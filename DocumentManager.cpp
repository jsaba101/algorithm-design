#include "DocumentManager.h"

using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit){
    documentList.push_back({name, id, license_limit});
}

void DocumentManager::addPatron(int patronID){
    patronIDs.push_back(patronID);
}

int DocumentManager::search(string name){
    int size = documentList.size();
    int id;
    for (int i = 0; i < size; i++){
        if (name == documentList[i].name){
            id = documentList[i].id;
            return id;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    int documentList_Size = documentList.size();
    int patronIDs_Size = patronIDs.size();
    int newLicense_limit;
    int doclimit_Check = 0;
    int patronID_Check = 0;

    for (int i = 0; i < documentList_Size; i++){
        if (docid == documentList[i].id){
            doclimit_Check = documentList[i].license_limit;
            break;
        }
    }
    for (int i = 0; i < patronIDs_Size; i++){
        if (patronID == patronIDs[i]){
            patronID_Check = patronID;
            break;
        }
    }

    if (doclimit_Check == 0 || patronID_Check == 0){
        return false;
    } else {
        borrowed.insert({docid, patronID});
        for (int i = 0; i < documentList_Size; i++){
            if (docid == documentList[i].id){
                newLicense_limit = documentList[i].license_limit;
                newLicense_limit = newLicense_limit - 1;
                documentList[i].license_limit = newLicense_limit;
                break;
            }
        }
        return true;
    }
}

void DocumentManager::returnDocument(int docid, int patronID){
    borrowed.erase(docid);
    int newLicense_limit;
    int documentList_Size = documentList.size();
    for (int i = 0; i < documentList_Size; i++){
        if (docid == documentList[i].id){
            newLicense_limit = documentList[i].license_limit;
            newLicense_limit = newLicense_limit + 1;
            documentList[i].license_limit = newLicense_limit;
            break;
        }
    }
}