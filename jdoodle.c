#include <kipr/botball.h>

int main()
{
    set_servo_position(3, 320);
    enable_servo(3);
    msleep(400);
    create_connect();
    create_full();
    create_drive_direct(-200,-200);
    msleep(4100);
    create_stop();
    set_create_total_angle(0);
    while (get_create_total_angle() < 95)
        create_drive_direct(-150,150);
    create_stop();
    create_drive_direct(-150,-150);
    msleep(2450);
    create_stop();
    set_servo_position(3, 1600);
    enable_servo(3);
    msleep(400);
    create_drive_direct(-200,-200);
    msleep(1100);
    create_stop();
    create_drive_direct(-100,100);
    msleep(500);
    set_servo_position(3, 320);
    msleep(200);
    create_drive_direct(100,-100);
    msleep(600);
    create_drive_direct(200,200);
    msleep(1800);
    create_stop();
    msleep(200);
    set_servo_position(3,1600);
    msleep(200);
    while ((get_create_rbump() == 0) && (get_create_lbump() == 0))
    	create_drive_direct(500,500);
    create_stop();
    create_disconnect();
    return 0; 
}