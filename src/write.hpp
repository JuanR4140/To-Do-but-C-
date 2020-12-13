#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void menu();

void write() {
  std::vector<std::string> todoArray;
  std::string output;
  std::string todo;
  std::string enter;

  std::cout
  << "Making a To Do\n"
  << "--------------\n\n"
  << "Enter To Do:\n> ";
  std::getline(std::cin, todo);

  std::ifstream readRohilFile("rohilFile");

  while(getline(readRohilFile, output)){
  //std::cout << output << std::endl;
  todoArray.push_back(output);
  }

  readRohilFile.close();

	std::ofstream rohilFile("rohilFile");
  //rohilFile << todo;
  todoArray.push_back(todo);

  std::string text;
  for(int i = 0; i < todoArray.size(); i++) {
  text += todoArray[i] + '\n';
  }

  //the text has all the elements in the array seperated with the \n, so you mighy as well push to the file with the text
  std::ofstream writeRohilFile("rohilFile");
  writeRohilFile << text;
  std::cout << "\nYour To Do is saved!\n" << std::endl;
  writeRohilFile.close();
  rohilFile.close();

  menu();
}