#include <simplecpp>

main_program {
    initCanvas("Man and Dog", 700, 700);
    //draw axes
    Turtle t;
    t.right(90); t.forward(350);
    t.right(180); t.forward(700);
    t.right(180); t.forward(350);
    t.right(90); t.forward(350);
    t.right(180); t.forward(750);

    Text tx1(400,365,"50");
    Text tx2(450,365,"100");
    Text tx3(500,365,"150");
    Text tx4(550,365,"200");
    Text tx5(600,365,"250");
    Text tx6(650,365,"300");
    

    wait(4);


    Turtle t1, t2;
    t1.setColor(COLOR("blue"));
    t2.setColor(COLOR("red"));

    t2.forward(300); t2.right(180);

    wait(4);
    

    repeat(50){
        t1.forward(3);
        t2.forward(6);
    }

    wait(5);


}
