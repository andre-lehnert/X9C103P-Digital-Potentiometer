#include <DigiPotX9Cxxx.h>

DigiPot red(2,3,4);
DigiPot green(5,6,7);
DigiPot blue(8,9,10);

int input;
int str;
void setup() {
  //Serial.begin(115200);
  red.set(100);
  green.set(100);
  blue.set(100);
}

void loop() {

  int d = 30;

  //red.set(100);
  //green.set(100);
  //blue.set(0);
  
  //for(int a = 0; a < 3; a++) {

    //if (a = 0)
    for (int i = 100; i >= 0; i--) {
     
        red.increase(1);
        green.decrease(1);       
        delay(d);
    }

     delay(d * 100);
    
    //if (a = 1)
    for (int i = 100; i >= 0; i--) {
     
        green.increase(1);
        blue.decrease(1);
        delay(d);
    }

    delay(d * 100);
    
    //if (a = 2)
    for (int i = 100; i >= 0; i--) {
     
        blue.increase(1);
        red.decrease(1);
        delay(d);
    }

     delay(d * 100);


    

     red.set(100);
     green.set(100); 
     blue.set(100);

     for (int i = 100; i >= 0; i--) {
     
        red.decrease(1);
        green.decrease(1);
        blue.decrease(1);

         delay(d);
    }
     
      delay(d * 200);

     for (int i = 100; i >= 0; i--) {
     
         red.increase(1);
          green.increase(1);
        blue.increase(1);

         delay(d);
    }
    

     
  //}

  //delay(5000);
}

