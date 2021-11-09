#include <iostream>

#include "Tree.h"
#include "TreeType.h"
#include "TreeFactory.h"
#include "Forest.h"

using namespace std;

int main() {
    //Initialisation, totally there exist 3 * 3 * 3 = 27 types of tree
    string color[3] = {"red", "blue", "yellow"};
    string texture[3] = {"texture1", "texture2", "texture3"};
    string name[3] = {"Apple Tree", "Pear Tree", "Peach Tree"};

    //forest using FlyWeight
    Forest forest1;
    for (int i = 0; i < 100'000'00; ++i) {
        forest1.plantTree(rand(), rand(), name[rand() % 3], color[rand() % 3], texture[rand() % 3]);
    }

//    forest without FlyWeight
    Forest forest2;
    for (int i = 0; i < 100'000'0; ++i) {
        forest2.plantWholeTree(rand(), rand(), name[rand() % 3], color[rand() % 3], texture[rand() % 3]);
    }
    return 0;
}
