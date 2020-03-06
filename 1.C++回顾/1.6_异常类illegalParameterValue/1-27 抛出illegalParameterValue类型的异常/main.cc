/**
 *  小节： 1.6_异常类illegalParameterValue
 *  程序： 1-27 抛出illegalParameterValue类型的异常
*/

#include "ill.h"


int abc(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){
        throw illegalParameterValue("All parameters should be > 0");
    }
    return a + b * c;
}




int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


