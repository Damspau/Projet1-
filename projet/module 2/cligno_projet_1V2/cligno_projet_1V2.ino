#include "param.h"
void setup() {
 int i;
 for (i=5;i<=13;i++)
 {
 pinMode (i, OUTPUT);

}
}
void loop() {
simultaneCligno();
}
