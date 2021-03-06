/**
 *  小节： 1.6_异常类illegalParameterValue
 *  程序： 1-26 定义一个异常类
*/

#ifndef __ILL_H__
#define __ILL_H__

#include <string>
#include <iostream>

class illegalParameterValue
{
private:
    std::string message;
public:
    illegalParameterValue():
        message("Illegal parameter value"){}
    illegalParameterValue(const char *theMessage){
        message = theMessage;
    }
    ~illegalParameterValue(){}

    void outputMessage(){
        std::cout << message << std::endl;
    }
};







#endif /* __ILL_H__ */
