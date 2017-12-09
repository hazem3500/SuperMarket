#include "Administrator.h"

Administrator::Administrator()
{

}

void Administrator::ReportAvailableItems(int) const
{
    
}


void Administrator::AddNewItem(int, string, type, amount)
{
    
}


void Administrator::UpdateExistingItem(int)
{
    
}


void Administrator::ReportTotalRevenue()
{
    
}


int Administrator::TotalCustomer()
{
    return customerList.size();
}


double Administrator::MaxReceipt()
{
    return maxReceipt;
}


void Administrator::SaveStock()
{
    
}


void Administrator::AddCustomer( Customer c )
{
    double total = c.getTotal();
    if (total > maxReceipt) {
        maxReceipt = total
    }
    
    customerList.push_back(c);
    
}