//109. Vector
#include <iostream>
#include <vector>

int main(){
    std::vector<int>  scores;
    scores.reserve(2);
    scores.push_back(30);
    scores.push_back(50);

    for(std::vector<int>::iterator iter = scores.begin(); iter != scores.end(); iter++){
        std::cout<<*iter;
    }
    return 0;
}