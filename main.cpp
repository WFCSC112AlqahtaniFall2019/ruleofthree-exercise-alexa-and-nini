#include <iostream>
using namespace std;

#include "IntList.h"

int main(){

    IntList L1 (5,0);
    IntList L2 (5,5 );

    L2=L1;

    L2.print(L2);


    //4- declare L2 and make that l2=l1 is properly working

   return 0;
}
