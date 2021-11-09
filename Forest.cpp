//
// Created by dell on 2021-11-09.
//

#include "Forest.h"
#include "Tree.h"
#include "TreeType.h"
using namespace std;

void Forest::plantTree(int x, int y, std::string name, std::string color, std::string texture) {
    TreeType treeType = treeFactory.getTreeType(name, color, texture);
    Tree tree(x, y, treeType);
    trees.push_back(tree);
}

void Forest::draw() {
    for (const auto &item : trees){
        cout << item << endl;
    }
}

Forest::Forest() {}
