#include <vector>
#include <string>
std::vector <std::string> commands = {"add", "subtract", "multiply", "divide", "+", "-", "", "/", "echo"}
void extracmd(){
  std::string new_cmd;
  printf("Enter a new command ");
  cin >> new_cmd;
  if(cmd == "exit"){
    return 0;
  }else{
    commands.push_back(new_cmd);
  }
}
