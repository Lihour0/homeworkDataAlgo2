#include <iostream>
#include <string>

std::string reverseString(std::string input){
  std::string reversedString = "";
  for(int i = input.length() - 1; i >= 0; i-- ){
    reversedString += input[i];
  }
  return reversedString;
}

int main(){
  std::string input;
  getline(std::cin, input);
  std::cout<<"Reversed String: "<< reverseString(input);
}
