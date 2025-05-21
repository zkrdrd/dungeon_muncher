#include <iostream>
#include <human.hpp>
//using namespace std;

int main()
{
    Human obj;
    auto human = obj.GetHuman();
    human.DisplayStats();
    //std::cout << obj.GetHuman() << std::endl;
    std::cout << "Hello world!" << std::endl;
    return 0;
}
