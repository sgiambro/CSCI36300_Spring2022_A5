// shared_exe.cpp
    
#include "my_shared_lib.h"
    
int main (int argc, char * argv []) {
    print_message ("Hello, World!");
      
    Greeting g;
    g.say_message ("Hello, World!");
      
    return 0;
}
    