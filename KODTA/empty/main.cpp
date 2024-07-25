#include "empty.h"

int main() 
{
    Empty e1;
    const Empty e2 = e1; //duplication of e1
    
    e1 = e2;//replace e1 with e2
    
    Empty  *p1 = &e1; //e1.operator&() / E
    const  Empty *p2 = &e2; //F


    return 0;
}