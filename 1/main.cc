#include <cctype>
#include <iostream>
#include <string>

std::string Full2Short(std::string fullForm){
  std::string shortForm = "";
  for(int i = 0; i < fullForm.length(); i++){
    if(std::isupper(fullForm[i])){
      shortForm += fullForm[i];
    }
  }
  return shortForm;
}

int main(){
  std::string fullForm;
  getline(std::cin, fullForm);
  std::cout<<"Short form: "<<Full2Short(fullForm)<<"\n";
}


