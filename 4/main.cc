#include <iostream>
#include <string>
#include <termios.h>
#include<unistd.h>

int main(){
  std::string input;
  char ch;
  std::cout<<"Input: ";
  termios oldt;
  tcgetattr( STDIN_FILENO, &oldt);
  termios newt = oldt;
  newt.c_lflag &= ~ECHO;
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);

  while((ch = getchar()) != '\r'){
    input += ch;
    std::cout<<"*";
  } 

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  std::cout<<"\n"<<"Output: "<<input;
}
