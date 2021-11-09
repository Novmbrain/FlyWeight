//
// Created by dell on 2021-11-09.
//

#include "TreeComplet.h"

TreeComplet::TreeComplet(int x, int y, const std::string &name, const std::string &color, const std::string &texture)
        : x(x), y(y), name(name), color(color), texture(texture) {}

std::ostream &operator<<(std::ostream &os, const TreeComplet &complet) {
    os << "x: " << complet.x << " y: " << complet.y << " name: " << complet.name << " color: " << complet.color
       << " texture: " << complet.texture;
    return os;
}
