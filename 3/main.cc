#include <iostream>
#include <string>


void getData(std::string &maritalStatus, double &salary) {
  std::cout << "Enter your marital status (single/married): ";
  getline(std::cin, maritalStatus);

  std::cout << "Enter your salary: ";
  std::cin >> salary;
}
double taxAmount(std::string maritalStatus, double salary) {
  double tax = 0;
  double freeTaxRange = (maritalStatus == "single") ? 4000 : 7000;
  double taxableIncome = salary - freeTaxRange;

  if (taxableIncome > 0) {
    if (taxableIncome <= 15000) {
      tax = taxableIncome * 0.15;
    } else if (taxableIncome <= 40000) {
      tax = 2250 + (taxableIncome - 15000) * 0.25;
    } else {
      tax = 8460 + (taxableIncome - 40000) * 0.35;
    }
  }
  return tax;
}
void output(double tax, std::string maritalStatus, double salary){
  std::cout<< "Your maritalStatus" <<maritalStatus<<"\n";
  std::cout<< "Your Salary is: $"<<salary<<"\n";
  std::cout<< "Your tax Amount is: $"<<tax;
}


int main(){
  std::string maritalStatus;
  double salary;
  getData(maritalStatus, salary);
  double tax = taxAmount(maritalStatus, salary);
  output(tax, maritalStatus, salary);
}
