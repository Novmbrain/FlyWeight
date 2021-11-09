//
// Created by dell on 2021-11-09.
//

#ifndef DESIGNPARTTEN_TREETYPE_H
#define DESIGNPARTTEN_TREETYPE_H

#include<iostream>

class TreeType {

public:

    std::string name;
    std::string color;
    std::string texture;
    char bigData[100];

    TreeType(const std::string &name, const std::string &color, const std::string &texture);

    void draw(int x, int y);

    friend std::ostream &operator<<(std::ostream &os, const TreeType &type);

};


#endif //DESIGNPARTTEN_TREETYPE_H
