#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void menu();

void edit() {
  std::vector<std::string> editToDoArray;
  std::string editToDo;
  std::string output;
  int editChoice;
  std::string choiceStr;
  std::string editText;

  std::cout
  << "Editing a To Do\n"
  << "---------------"
  <<std::endl;
  int counter = 1;
  std::ifstream readRohilFile("rohilFile");
  while(getline(readRohilFile, output)) {
    if(output == "") {
      continue;
    }else{
      editToDoArray.push_back(output);
      std::cout << counter << ". " << output << std::endl;
      counter++;
    }
  }
  std::cout
  << "--------------------\n"
  << "which To Do to edit?\n> ";

  choiceStr = std::to_string(editChoice);
  std::getline(std::cin, choiceStr);
  editChoice = stoi(choiceStr);
  editChoice--;

  std::cout
  << "what text to replace it with?"
  << std::endl;
  std::getline(std::cin, editText);

  //std::cout << editText << std::endl;

  editToDoArray[editChoice] = editText;

  std::ofstream RohilFile("rohilFile");

  std::string text;
  for(int i = 0; i < editToDoArray.size(); i++) {
  text += editToDoArray[i] + '\n';
  }

  std::ofstream writeRohilFile("rohilFile");
  writeRohilFile << text;
  std::cout << "\nYour To Do is saved!\n" << std::endl;
  writeRohilFile.close();
  RohilFile.close();

}