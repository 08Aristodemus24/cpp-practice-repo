#include <iostream>
#include "test_utils.h"

int main(int argc, char** argv){
    Node node_1("node 1", NULL, NULL);
    Node node_2("node 2", NULL, NULL);
    // std::cout << node_1.get_data();

    Node node_3 = node_1 + node_2;
    

    std::cout << "Node 3: " << node_3.get_data() << std::endl;
    std::cout << "Is node 1 equal to node 2? " << (node_1 == node_2) << std::endl;
    std::cout << "Is node 1 not equal to node 2? " << (node_1 != node_2) << std::endl;

    return 0;
}