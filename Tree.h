//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_TREE_H
#define DESIGNPARTTEN_TREE_H

#include <iostream>
#include "TreeType.h"

class Tree {

public:
    int x;
    int y;
    TreeType treeType;
    Tree(int x, int y, const TreeType &treeType);
    void draw();

    friend std::ostream &operator<<(std::ostream &os, const Tree &tree);
};

#endif //DESIGNPARTTEN_TREE_H
