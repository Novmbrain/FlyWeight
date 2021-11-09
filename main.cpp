#include <iostream>

#include "Tree.h"
#include "TreeType.h"
#include "TreeFactory.h"
#include "Forest.h"

using namespace std;

int main() {
//    TreeType type1("a","b", "c");
//    TreeType type2("e","f", "g");
//
//    TreeType type3("h","i", "j");
//
//    TreeFactory treeFactory{type1,type2, type3};//
//    treeFactory.listAllTreeType();
//    cout << treeFactory.getTreeType("k","l","m") << endl;
//    treeFactory.listAllTreeType();
//    cout << treeFactory.getTreeType("a","b","c") << endl;
//TreeFactory treeFactory();

    string color[5] = {"red", "blue", "yellow", "green", "black"};
    string texture[5] = {"texture1", "texture2", "texture3", "texture4", "texture5"};
    string name[5] = {"Apple Tree", "Pear Tree", "Peach Tree", "Banyan Tree", "Banyan Tree"};

// test 1
    Forest forest1;
    for (int i = 0; i < 100000; ++i) {
        forest1.plantTree(rand(), rand(), name[rand() % 5], color[rand() % 5], texture[rand() % 5]);
    }

    //test 2
    Forest forest2;
    for (int i = 0; i < 100000; ++i) {
        forest1.plantWholeTree(rand(), rand(), name[rand() % 5], color[rand() % 5], texture[rand() % 5]);
    }

    return 0;
}
