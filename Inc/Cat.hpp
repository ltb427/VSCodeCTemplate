#include <iostream>

class Cat
{
    public:
    Cat()
    {
        std::cout<<"cat  is coming"<<std::endl;
    }
    ~Cat()
    {
        std::cout<<"cat  is going"<<std::endl;
    }
    void CatSay();
};