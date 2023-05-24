#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <vector>
#include <unordered_map>

class DocumentManager{
    private:
        struct Document{
            std::string name;
            int id;
            int license_limit;
        };
        std::vector<Document> documentList;
        std::vector<int> patronIDs;
        std::unordered_map<int, int> borrowed;
    public:
        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name); 
        bool borrowDocument(int docid, int patronID); 
        void returnDocument(int docid, int patronID);
};
#endif