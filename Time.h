#include <ctime>
using namespace std;

class Time
{
    int hours , minutes ;
public:
    Time();
    Time operator + (int) ;
};
