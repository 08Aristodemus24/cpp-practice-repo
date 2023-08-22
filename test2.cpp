#include <iostream>
#include <string>
#include <vector>



int main(int argc, char** argv){
    std::vector<std::string> names = {"initializing", "in", "3", "2", "1"};
    
    std::cout << "this is a test vector of strings" << std::endl;

    for(std::string name: names){
        std::cout << name << std::endl;
    }

    return 0;
}