/**
 *  小节： 1.6_异常类illegalParameterValue
 *  程序： 1-28 捕捉illegalParameterValue类型的异常
*/

#include "ill.h"
#include <iostream>

int abc(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){
        throw illegalParameterValue("All parameters should be > 0");
    }
    return a + b * c;
}




int main(int argc, char const *argv[])
{
    try
    {
        std::cout << abc(2,0,4) << std::endl;
    }
    catch(illegalParameterValue e)
    {
        std::cout << "The parameters to abc were 2, 0, and 4" << std::endl;
        std::cout << "illegalParameterValue exception thrown" << std::endl;
        e.outputMessage();
        return 1;
    }

    return 0;
}


