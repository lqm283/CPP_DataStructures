#include "currency.h"


currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign,theDollars,theCents);
}
