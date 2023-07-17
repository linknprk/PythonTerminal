import os 
def user():
    tries = 0
    if os.path.exists("username.txt"):
        username = open("username.txt", "r")
        Username = input("Enter your username ")
        if Username == username.read():
            password = open("password.txt", "r")
            Password = input("Enter your password ")
            if Password == password.read():
                username = open("username.txt", "r")
                print("Welcome Back ", username.read())
                username.close()
                os.system("start terminal++.exe");
            else:
                if not tries == 3:
                    print("Incorrect Password!")
                    tries = tries+1
                    user()
                else:
                    print("Access Denied")
        else:
            if not tries == 3:
                print("Incorrect Username")
                tries = tries+1
                user()
            else:
                print("Access Denied!")
    else:
        username = input("Create a username > ")
        password = input("Create a password > ")
        Password = open("password.txt", "w")
        Password.write(password)
        Password.close()
        Username = open("username.txt", "w")
        Username.write(username)
        Username.close()
        import terminal
user()
