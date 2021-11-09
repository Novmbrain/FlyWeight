//
// Created by dell on 2021-11-09.
//

#include "TreeFactory.h"
#include "TreeType.h"

using namespace std;

std::string TreeFactory::getKey(const TreeType &treeType) const {
    return treeType.name + "_" + treeType.color + "-" + treeType.texture;
}

TreeFactory::TreeFactory(std::initializer_list<TreeType> tree_types) {
    for(TreeType treeType : tree_types){
        this->treeTypeMap.insert(std::map<std::string, TreeType>::value_type(this->getKey(treeType), treeType));
    }

}

void TreeFactory::listAllTreeType() const {
    size_t count = this->treeTypeMap.size();
    std::cout << "\nTreeFactory: I have " << count << " treeType:\n";

    for (const auto &item : treeTypeMap){
        cout << item.first << " " << item.second << std::endl;
    }
}

TreeType TreeFactory::getTreeType(std::string name, std::string color, std::string texture) {
    TreeType treeType(name, color, texture);
    string key = getKey(treeType);

    if(this->treeTypeMap.find(key) == this->treeTypeMap.end()) {
//        cout << "TreeFactory: can't find this treeType, creating new one" << endl;
        this->treeTypeMap.insert(std::map<std::string, TreeType>::value_type(key, treeType));
    } else {
//        cout << "TreeFactory : Reusing existring treeType" << endl;
    }

    return this->treeTypeMap.at(key);
}

TreeFactory::TreeFactory() {}
