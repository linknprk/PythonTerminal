#include <iostream>
#include <string>
using namespace std;
int main(){
  string commands[10] = {"help", "add", "+", "subtract", "-", "multiply", "*", "divide", "/", "echo"};
  string terminalInput;
  printf("Enter a command > ");
  cin >> terminalInput;
  bool validCommand = false;
  for(int i = 0; i < 10; i++){
     if(terminalInput == commands[i]){
       validCommand = true;
       break;
     }
  }
  if(validCommand == true){
    if(terminalInput == "add" || terminalInput == "+"){
    float num1, num2;
    printf("Enter the first number > ");
    cin >> num1;
    printf("Enter the second number > ");
    cin >> num2;
    cout << "The sum is " << num1+num2 << endl;
    main();
  }
  if(terminalInput == "subtrract" || terminalInput == "-"){
    float num1, num2;
    printf("Enter the first number > ");
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
    float num1, num2;
    printf("Enter the first number > ");
    cin >> num1;
    printf("Enter the second number > ");
    cin >> num2;
    cout << "The result is " << num1/num2 << endl;
    main();
  }
  if(terminalInput == "echo"){
    string input;
    printf("Enter something: ");
    cin >> input;
    cout << input << endl;
    main();
  }
  if(terminalInput == "help"){
    cout << "The commands are: " << endl;
    for(int i = 0; i < 10; i++){
      cout << commands[i];
    }
    main();
  }
}else{
    cout << "Invalid Command!" << endl;
    cout << "The commands that exist are: ";
    for(int i = 0; i < 10; i++){
      cout << commands[i];
    }
    main();
  }
} 
