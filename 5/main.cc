#include <iostream>
#include <string>

int main() {
  std::string correctUsername = "admin";
  std::string correctPassword = "admin";

  std::string username;
  std::string password;

  std::cout << "Enter your username: ";
  getline(std::cin, username);

  std::cout << "Enter your password: ";
  getline(std::cin, password);

  if (username == correctUsername && password == correctPassword) {
    std::cout << "Access granted." << "\n";
  } else {
    std::cout << "Access denied." << "\n";
  }

  return 0;
}

