using namespace std;

class ShoppingItem{
    Item *item;
    int amount;
public:
    ShoppingItem(Item*, int);
    void printOut();
    string getItemName();
    int getItemAmount();
    void setItemAmount(int);
    void addToItemAmount(int);
    void removeFromItemAmount(int);
};