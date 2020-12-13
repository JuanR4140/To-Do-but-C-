#include <iostream>
#include <string>
#include <fstream>

void menu();

void read() {
  std::string output;
  std::string enter;

  std::cout
  << "Viewing To Do's\n"
  << "---------------"
  << std::endl;
  std::ifstream readRohilFile("rohilFile");
  int counter = 1;
  while(getline(readRohilFile, output)) {
    if(output == ""){
      continue;
    }else{
      std::cout << counter << ". " << output << std::endl;
      counter++;
    }
  }

  menu();
}