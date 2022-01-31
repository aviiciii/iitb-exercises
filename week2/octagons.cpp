#include <simplecpp>

main_program {
    initCanvas();
    // initiate tutles
    Turtle t1, t2, t3;
    // change angle of turtle to start octagon
    t2.left(120); t3.left(240);
    // octogon
    repeat(8) {
        t1.forward(80); t2.forward(80); t3.forward(80); wait(0.2);
        t1.left(360.0/8); t2.left(360.0/8); t3.left(360.0/8);
    }
    wait(5);
}