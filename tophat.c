#include <kipr/botball.h>

int main()
{
    while (analog(1) <= 1600){
        motor(0, 100);
        motor(1, 100);
    }
    ao();
    return 0;
}
