#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    string commands[13]= {"run", "help", "exit", "output", "iscmd", "ping", "get_ip", "ipconfig", "listdir", "write_file", "listfile", "python", "file_exists"};
    string command;
    printf("Type help to get a list of commands \n");
    printf("> ");
    cin >> command;
    for(int i = 0; i < 11; i++){
        if(command == commands[i]){
            if(command == "help"){
                for(int i = 0; i < 13; i++){
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
            if(command == "output"){
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
                for(int i = 0; i < 13; i++){
                    if(cmd == commands[i]){
                        cout << "true" << endl;
                        break;
                    }
                    if(i == 8){
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
                system("ping " + request.c_str());
                main();
            }
            if(command == "get_ip"){
                string request;
                printf("Enter a URL(Enter /? for help) > ");
                cin >> request;
                system("tracert " + request.c_str());
                main();
            }
            if(command == "ipconfig"){
                printf("Enter (/? for help. Optional) >");
                string userInput;
                cin >> userInput;
                if(userInput != ""){
                    system("ipconfig /" + userInput.c_str());
                }else{
                    system("ipconfig");
                }
            }
            if(command == "listdir"){
                string cmd = "python listdir.py";
                system(cmd);
                main();
            }
            if(command == "write_file"){
                string cmd = "python write_file.py";
                system(cmd)
                main();
            }
            if(command == "listfile"){
                string cmd = "python list_file.py";
                system(cmd);
                main();
            }
            if(cimmand == "python"){
                string python_file;
                printf("Enter Python File(optional) > ");
                cin >> python_file;
                if(python_file != ""){
                    string cmd = "python " + python_file;
                    system(cmd.c_str);
                    main();
                }else{
                    string cmd = "python";
                    system(cmd.c_str);
                    main();
                }
            }
            if(command == "file_exists"){
                string cmd = "python filexists.py";
                system(cmd.c_str);
                main();
            }
            if(command == "run"){
                string program;
                printf("Enter the program you want to run > ");
                cin >> program;
                string cmd = "start " + program;
                system(cmd.c_str);
            }
        }else if(i > 13){
            cout << "Invalid Command! The commands that exist are: " << endl;
            for(int i = 0; i < 13; i++){
                cout << commands[i] << endl;
            }
            main();
        }
    }
    return 0;
}
