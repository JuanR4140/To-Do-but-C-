#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void clear() {
  std::cout << "\033[2J\033[1;1H";
}

int main() {
  std::string choiceStr;
	int choice;
  std::string output;
  std::string todo;
  std::vector<std::string> todoArray;

  std::cout
  << "To Do's but C++ by JuanR4140\n"
  << "---"
  << std::endl;
  std::cout
  << "1. Make a To Do\n"
  << "2. View To Do's\n"
  << "3. Delete a To Do"
  << std::endl;
  std::getline(std::cin, choiceStr);

	choice = stoi(choiceStr);

  switch(choice) {
    case 1:
      {
      clear();
      std::cout
      << "Making a To Do\n"
      << "--------------\n\n"
      << "Enter To Do:\n> ";
      std::getline(std::cin, todo);

			std::ofstream rohilFile("rohilFile");
      rohilFile << todo;
      rohilFile.close();
      break;
      }
    case 2:
      {
      clear();
      std::cout
      << "Viewing To Do's\n"
      << "---------------"
      << std::endl;
      break;
      }
    case 3:
    {
      clear();
      std::cout
      << "Deleting a To Do\n"
      << "----------------"
      << std::endl;
      break;
    }
    default:
      std::cout << "wrong command";
  }
} 