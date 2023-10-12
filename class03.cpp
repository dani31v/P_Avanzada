Actividad 2 avanzada

 #include <iostream>
#include <string>

using namespace std;

namespace first_space
{
    void func()
    {
        std::cout << "Inside first_space" << std::endl;
    }
    namespace third_space 
    {
        void func()
        {
            std::cout << "Inside third_space" << std::endl;
        }
    }
}
// second name space    
namespace second_space
{
    void func1()
    {
        std::cout << "Inside second_space" << std::endl;
    }
}
//using namespace first_space;
//using namespace second_space;
int main() {
    //func();
    //func1();
    first_space::third_space::func;
    return 0;
