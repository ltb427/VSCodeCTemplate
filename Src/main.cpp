#include <iostream>
#include "Cat.hpp"

int main()
{
    Cat* cat = new Cat();
    cat->CatSay();
    delete cat;
    system("pause");
    return 0;
}