#include <unistd.h>

class Foo {
public:
    int turn;
    Foo() {
        turn = 0;
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        
        turn = 1;
    }

    void second(function<void()> printSecond) {
        while(turn!=1) usleep(0.01);   
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        turn = 2;
        
    }

    void third(function<void()> printThird) {
        while(turn!=2) usleep(0.01);   
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};