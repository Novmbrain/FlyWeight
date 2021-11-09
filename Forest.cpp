//
// Created by dell on 2021-11-09.
//

#include "Forest.h"
#include "Tree.h"
#include "TreeType.h"
#include "TreeComplet.h"
using namespace std;

void Forest::plantTree(int x, int y, std::string name, std::string color, std::string texture) {
    TreeType& treeType = treeFactory.getTreeType(name, color, texture);
    Tree tree(x, y, treeType);
    treesFlyWeight.push_back(tree);
}

void Forest::plantWholeTree(int x, int y, std::string name, std::string color, std::string texture) {

    TreeComplet treeComplet(x, y, name, color, texture);
    treesComplet.push_back(treeComplet);

}

void Forest::draw() {
    for (const auto &item : treesFlyWeight){
        cout << item << endl;
    }
}

void Forest::drawTreeComplet() {
    for (const auto &item : treesComplet){
        cout << item << endl;
    }
}

Forest::Forest() {}
