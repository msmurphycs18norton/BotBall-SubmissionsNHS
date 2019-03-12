#include <kipr/botball.h>

int main()
{
    motor(0, 50);
    motor(1, -50);
    msleep(1200);
    ao();
    return 0;
}
