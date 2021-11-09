//
// Created by dell on 2021-11-09.
//

#include "Tree.h"

using namespace std;

Tree::Tree(int x, int y, const TreeType &treeType) : x(x), y(y), treeType(treeType) {}

void Tree::draw() {
    cout<<"a tree in x: "<< x << " y: " << y << endl;
}

ostream &operator<<(ostream &os, const Tree &tree) {
    os << "x: " << tree.x << " y: " << tree.y << " treeType: " << tree.treeType;
    return os;
}
