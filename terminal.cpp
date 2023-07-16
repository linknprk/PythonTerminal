#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
  string commands[12] = {"ipcomfig","echo","help", "exit", "add", "subtract", "multiply", "divide", "+", "-", "*", "/", "cls", "ping"};
  string terminalInput;
  printf("Enter a command");
  cin >> terminalInput;
  for(int i = 0; i < 11; i++){
    if(terminalInput == commands[i]){
      if(terminalInput == "exit"){
        return 0;
      }
      if(terminalInput == "help"){
        for(int i = 0; i < 12; i++){
          cout << "The commands are: " << endl;
          cout << commands[i] << endl;
        }
        main();
      }
      if(terminalInput == "echo"){
        string userInput;
        printf("Enter something: ");
        cin >> userInput;
        cout << userInput;
        main();
      }
      if(terminalInput == "add" || terminalInput == "+"){
        float num1,num2;
        printf("Enter the first number > ");
        cin >> num1;
        printf("Enter the second number > ");
        cin >> num2;
        cout << "The sum is " << num1+num2 << endl;
        main();
      }
      if(terminalInput == "subtract" || terminalInput == "-"){
        float num1,num2;
        printf("Enter the first > ");
        cin >> num1;
        printf("Enter the second number > ");
        cin >> num2;
        cout << "The result is " << num1-num2 << endl;
        main();
      }
      if(terminalInput == "multiply" || terminalInput == "*"){
        float num1,num2;
        printf("Enter the first number > ");
        cin >> num1;
        printf("Enter the second number > ");
        cin >> num2;
        cout << "The result is " << num1*num2 << endl;
        main();
      }
      if(terminalInput == "divide" || terminalInput == "/"){
        float num1,num2;
        printf("Enter the first number ");
        cin >> num1;
        printf("Enter the second number ");
        cin >> num2;
        cout << "The result is " << num1/num2 << endl;
        main();
      }
      if(terminalInput == "exit"){
        return 0;
      }
      if(terminalInput == "cls"){
        system("cls");
        main();
      }
      if(terminalInput == "ping"){
        string request;
        int amount;
        printf("Enter a server/IP Address to ping >  ");
        cin >> request;
        printf("Enter amount of packets you went to send> > ");
        cin >> packets;
        if(packets > 6550){
          cout << "You can send " << packets << " you can only send 6550 packets" << endl;
          main();
        }else{
          string command = "ping " + request + "-n" + to_string(packet);
          system(command.c_str());
          main();
        }
      }
      if(terminalInput == "ipconfig"){
        string option;
        print("Enter(/? etc) > ")
        cin >> option;
        if(option == ""){
          system("ipconfig");
          main();
        }else{
          string command = "ipconfig /" + option;
          system(command);
          main();
      }
    }else{
      cout << "Invalid Command!" << endl;
      cout << "The commands are: " << endl;
      for(int i = 0; i < 11; i++){
        cout << commands[i] << endl;
      }
    main();
    }
  return 0;
}
}
