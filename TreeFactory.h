//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_TREEFACTORY_H
#define DESIGNPARTTEN_TREEFACTORY_H

#include <iostream>
#include <map>
#include "TreeType.h"

class TreeFactory {
private:
    std::map<std::string, TreeType> treeTypeMap;
    std::string getKey(const TreeType &treeType) const;

public:

    TreeFactory(std::initializer_list<TreeType> tree_types);
    TreeFactory();

    TreeType getTreeType(std::string name, std::string color, std::string texture);
    void listAllTreeType() const;


};


#endif //DESIGNPARTTEN_TREEFACTORY_H