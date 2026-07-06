#include <iostream>
#include "fren.hpp"

int main(){
    double mesafe = 3.2;
    double hiz = 2.3;
    double guvenlimesafe = guvenli_mesafe(hiz);
    if (fren_karari(mesafe))
    {
        std::cout<<"FREN: Engel "<<mesafe<<"  "<<guvenlimesafe<<"m\n";
    }else{
        std::cout<<"Yol Açik\n";

    }
    return 0;
    
}