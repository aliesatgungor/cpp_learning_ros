#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::vector<double> mesafeler = {12.4,8.1,3.2,45.0,2.7};
    cout<<"toplam nokta"<<mesafeler.size()<<"\n";

    cout<<"ilk okuma"<<mesafeler.front()<<endl;
    cout<<"son okuma"<<mesafeler.back()<<endl;

    mesafeler.push_back(1.5);
    cout<<"eklendikten sonra nokta"<<mesafeler.size()<<endl;
    

    return 0;
}