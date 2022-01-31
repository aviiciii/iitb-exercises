#include <simplecpp>

main_program {
    initCanvas("Projectile", 1000, 1000);
    int start = getClick();
    Circle c(start/65536, start%65536, 5);
    c.penDown();
    double vx=1, vy=-2, gravity=0.02;
    repeat(500) {
        c.move(vx,vy);
        vy += gravity;
        wait(0.01);
    }
    wait(10);
}