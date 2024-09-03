#include "employeesal.cpp"
#include "employeehourly.cpp"
using namespace std;
int main()
{
    hourlemp x;
    x.setempid(1);
    x.setname("pranay");
    x.sethourlyrate(100);
    x.sethoursworked(100);
    x.display();
    
    sal y;
    y.setempid(1);
    y.setname("pranay");
    y.setsalary(10000);
    y.display();

    
}