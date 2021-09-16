#include <iostream>
#include <malloc.h>

void crashfunc()
{
    std::cout << "going to loop forever" << std::endl;
    
    char crashArray[100];
    for (int x = 0; x <= 100; ++x) {
        *(crashArray + x) = 'a';
    }

    std::cout << "should not reach here" << std::endl;
}

void loopfunc() {
    crashfunc();
}

void func() 
{
    loopfunc();
}
int main()
{
    func();
}
