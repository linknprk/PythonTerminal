#include <iostream>
#include <string>
#include <stdlib>
using namespace std;
int main(){
    string commands[5] = {"help", "exit", "echo", "iscmd", "ping"};
    string command;
    printf("Type help to get a list of commands \n");
    printf("> ");
    cin >> command;
    for(int i = 0; i < 5; i++){
        if(command == commands[i]){
            if(command == "help"){
                for(int i = 0; i < 5; i++){
                    cout << commands[i] << endl;
                }
                main();
            }
            if(command == "exit"){
                string leave;
                printf("Are you sure you want to leave? Y/N? ");
                cin >> leave;
                if(leave == "Y" || leave == "y"){
                    return 0;
                }else{
                    main();
                }
            }
            if(command == "echo"){
                string userInput;
                printf("Enter > ");
                cin >> userInput;
                cout << userInput << endl;
                main();
            }
            if(command == "iscmd"){
                string cmd;
                printf("Enter a command > ");
                cin >> cmd;
                for(int i = 0; i < 5; i++){
                    if(cmd == commands[i]){
                        cout << "true" << endl;
                        break;
                    }
                    if(cmd != commands[i]){
                        cout << "false" << endl;
                        break;
                    }
                }
                main();
            }
            if(command == "ping"){
                string request;
                printf("Enter the URL/IP Address > ");
                cin >> request;
                string cmd = request;
                system("ping " + cmd);
                main();
            }
        }
    }
}
