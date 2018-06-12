#ifndef PRO_CPP_OBJ_ORDER_B_
#define PRO_CPP_OBJ_ORDER_B_

#ifndef PRO_CPP_OBJ_ORDER_A_
#include "A.h"
#endif

class B
{
public:
    A a;
    const int num;
    B();
};

extern B b;
#endif