#include <Person.h>
#include "Stock.h"
#include "Customer.h"
#include <vector>

using namespace std;

class Administrator : public Person
{
    Stock stock;
    vector<Customer> customerList;
    double totalRevenue;
    double maxReceipt;
    public:
        Administrator();
        void ReportAvailableItems(int) const;
        void AddNewItem(int, string, type, amount);
        void UpdateExistingItem(int);
        void ReportTotalRevenue();
        int TotalCustomer();
        double MaxReceipt();
        void SaveStock();
        void AddCustomer(Customer);
};
