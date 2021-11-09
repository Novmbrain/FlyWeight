//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_FOREST_H
#define DESIGNPARTTEN_FOREST_H

#include <vector>
#include "iostream"
#include "Tree.h"
#include "TreeFactory.h"
class Forest {
private:
    std:: vector<Tree> trees;
    TreeFactory treeFactory;

public:
    Forest();
    void plantTree(int x, int y, std::string name, std::string color, std::string texture);
    void draw();
};


#endif //DESIGNPARTTEN_FOREST_H
