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

    string color[3] = {"red", "blue", "yellow"};
    string texture[3] = {"texture1", "texture2", "texture3"};
    string name[3] = {"Apple Tree", "Pear Tree", "Peach Tree"};
    //test 1
    Forest forest1;
    for (int i = 0; i < 1000000; ++i) {
        forest1.plantTree(rand(), rand(), name[rand() % 3], color[rand() % 3], texture[rand() % 3]);
    }

    //test 2
    Forest forest2;
    for (int i = 0; i < 1000000; ++i) {
        forest2.plantWholeTree(rand(), rand(), name[rand() % 3], color[rand() % 3], texture[rand() % 3]);
    }

    return 0;
}
