//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_FOREST_H
#define DESIGNPARTTEN_FOREST_H

#include <vector>
#include "iostream"
#include "Tree.h"
#include "TreeFactory.h"
#include "TreeComplet.h"
class Forest {
private:
    std:: vector<Tree> treesFlyWeight;
    std:: vector<TreeComplet> treesComplet;
    TreeFactory treeFactory;



public:
    Forest();
    void plantTree(int x, int y, std::string name, std::string color, std::string texture);
    void plantWholeTree(int x, int y, std::string name, std::string color, std::string texture);

    void draw();

    void drawTreeComplet();
};


#endif //DESIGNPARTTEN_FOREST_H
