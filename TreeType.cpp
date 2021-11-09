//
// Created by dell on 2021-11-09.
//

#include "TreeType.h"

using namespace std;



void TreeType::draw(int x, int y) {
    cout<<"a tree in x: "<< x << " y: " << y << endl;
}

ostream &operator<<(ostream &os, const TreeType &type) {
    os << "name: " << type.name << " color: " << type.color << " texture: " << type.texture;
    return os;
}

TreeType::TreeType(const string &name, const string &color, const string &texture) : name(name), color(color),
                                                                                     texture(texture) {
}







