#include <iostream>
#include "headers/functions.h"

int main(int argc, char * argv[] )
{
  int x = startNotification();
  system("python audio-listener.py");

  return 0;
}
