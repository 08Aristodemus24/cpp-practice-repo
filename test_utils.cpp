#include <iostream>
#include <string>
#include "test_utils.h"

/* 
This is the implementation file. Note in order to implement the
class' constructor and method prototypes access it using the 
<name of the class> followed by a :: to access the consutrctors
and methods and just specify the original parameters and the return
type it had. Note that the attributes public or private do not 
need to be defined here
*/

// definition of class' constructor
Node::Node(std::string data, Node* left, Node* right){
    this->data = data;
    this->left = left;
    this->right = right;
}

Node Node::operator+ (Node b){
    /* 
    appends Node a's string data to Node b's string data 
    */

    return this->data + " " + b.data;
}

bool Node::operator== (Node b){
    /*
    checks if Node a's string data is equal to Node b's string data
    */
   return (this->data == b.data);
}

bool Node::operator!= (Node b){
    /*
    checks if Node a's string data is not equal to Node b's string data
    */

   return (this->data != b.data);
}

// definition of class' public method
std::string Node::get_data(){
    return this->data;
}

// definition of class' public method
void Node::set_data(std::string val){
    this->data = val;
}