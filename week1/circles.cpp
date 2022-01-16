#include<simplecpp>

main_program{
    turtleSim();
    //centre circle(1)
    repeat (360) {
        forward(0.5); right(1);
    }
    //topcircle(2)
    repeat (360+60) {
        forward(0.5); left(1);
    }
    //othercircle(3-6)
    repeat (2) {
        repeat (360+180+60) {
            forward(0.5); right(1);
        }
        repeat (360+180-60) {
            forward(0.5); left(1);
        }
    }
    //last circle(7)
    repeat (360) {
        forward(0.5); right(1);
    }

    wait(5);
}

