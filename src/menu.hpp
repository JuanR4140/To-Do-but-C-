#include <iostream>
#include <string>
#include <fstream>

void write();
void read();
void deletee();
void edit();

void clear() {
  std::cout << "\033[2J\033[1;1H";
}

void menu() {
  std::string choiceStr;
  int choice;

  std::cout
  << "\nTo Do's but C++ by JuanR4140\n"
  << "---"
  << std::endl;
  std::cout
  << "1. Make a To Do\n"
  << "2. View To Do's\n"
  << "3. Delete a To Do\n"
  << "4. Edit a To Do"
  << std::endl;
  std::getline(std::cin, choiceStr);

  choice = std::stoi(choiceStr);

  switch(choice) {
    case 1:
      {
        clear();
        write();
      }
    case 2:
      {
        clear();
        read();
      }
    case 3:
      {
        clear();
        deletee();
      }
    case 4:
      {
        clear();
        edit();
      }
  }
}