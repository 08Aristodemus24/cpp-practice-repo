#ifndef TEST_UTILS_H
#define TEST_UTILS_H
#include <iostream>

// prototype of class and its methods
class Node{
    // private attributes/members
    std::string data;
    Node* left;
    Node* right;

    public:
        // public constructor
        Node(std::string data="", Node* left=NULL, Node* right=NULL);

        // below overload methods are akin to dunder method in python
        Node operator+ (Node b);

        bool operator== (Node b);

        bool operator!= (Node b);

        // public methods
        void set_data(std::string data);

        std::string get_data();

        
};
#endif