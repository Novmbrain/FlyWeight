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
//    TreeFactory treeFactory{type1,type2, type3};
//
//    treeFactory.listAllTreeType();
//    cout << treeFactory.getTreeType("k","l","m") << endl;
//    treeFactory.listAllTreeType();
//    cout << treeFactory.getTreeType("a","b","c") << endl;

//TreeFactory treeFactory();

    Forest forest;
    forest.plantTree(1,2,"a","b","c");
    forest.plantTree(1,2,"a","e","c");

    return 0;
}
