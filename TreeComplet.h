//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_TREECOMPLET_H
#define DESIGNPARTTEN_TREECOMPLET_H

#include <iostream>


class TreeComplet {

public:
    int x;
    int y;
    std::string name;
    std::string color;
    std::string texture;
    char bigData[100];

    TreeComplet(int x, int y, const std::string &name, const std::string &color, const std::string &texture);

    friend std::ostream &operator<<(std::ostream &os, const TreeComplet &complet);

};


#endif //DESIGNPARTTEN_TREECOMPLET_H
