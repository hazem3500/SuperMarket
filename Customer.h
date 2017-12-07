#include <Person.h>
#include <Time.h>

class Customer : public Person
{
    int id;
    Time arrivalTime;
    public:
        Customer();
};
