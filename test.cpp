#include "Stock.cpp"

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    Stock s1;
    Item *t1;
    s1.sortStock();
    s1.addItem("potato", "Drinking", 2515, 222);
    t1 = s1.findItemWithName("potato");
    cout << t1->getName();
    s1.printStock();
}
