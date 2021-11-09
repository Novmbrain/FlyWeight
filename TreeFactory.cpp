//
// Created by dell on 2021-11-09.
//

#include "TreeFactory.h"
#include "TreeType.h"

using namespace std;

std::string TreeFactory::getKey(const string name, const string color, const string texture) const {
    return name + "_" + color + "-" + texture;
}

void TreeFactory::listAllTreeType() const {
    size_t count = this->treeTypeMap.size();
    std::cout << "\nTreeFactory: I have " << count << " treeType:\n";

    for (const auto &item : treeTypeMap){
        cout << item.first << " " << item.second << std::endl;
    }
}

TreeType& TreeFactory::getTreeType(std::string name, std::string color, std::string texture) {

    string key = getKey(name, color, texture);

    if(this->treeTypeMap.find(key) == this->treeTypeMap.end()) {
//        cout << "TreeFactory: can't find this treeType, creating new one" << endl;
        TreeType treeType(name, color, texture);
        this->treeTypeMap.insert(std::map<std::string, TreeType>::value_type(key, treeType));
    } else {
//        cout << "TreeFactory : Reusing existing treeType" << endl;
    }

    return this->treeTypeMap.at(key);
}

TreeFactory::TreeFactory() {}
