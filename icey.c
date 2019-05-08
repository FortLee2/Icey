#include <kipr/botball.h>

int main()
{
    set_servo_position(2,1800);
    enable_servo(2);
    msleep(400);
    mav(2,-1000);
    mav(3,-1030);
    msleep(5500);
    ao();
    msleep(100);
    double angle = 85;
    mrp(3,1000,-angle/360 * 39 * 103);
    mrp(2,1000, angle/360 * 39 * 103);
    bmd(2);
    set_servo_position(2,235);
    msleep(200);
    mav(2,1000);
    mav(3,1000);
    msleep(6600);
    ao();
    msleep(100);
    mrp(3,1000,-9.3*103);
    mrp(2,1000,9.3*103);
    bmd(2);
    msleep(200);
    set_servo_position(2, 1550);
    msleep(200);
    mav(2,1100);
    mav(3,1200);
    msleep(2800);
    mrp(2,1000,3*103);
    mrp(3,1000,3*103);
    bmd(3);
    set_servo_position(2, 1900);
    msleep(200);
    mav(2,-1000);
    mav(3,-800);
    msleep(2000);
    ao();
    return 0; 
}
