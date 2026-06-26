#include <iostream>
#include "fren.hpp"

int main(){
    double mesafe = 3.2;
    if (fren_karari(mesafe))
    {
        std::cout<<"FREN: Engel "<<mesafe<<"m\n";
    }else{
        std::cout<<"Yol Açik\n";

    }
    return 0;
    
}