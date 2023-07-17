//tic tac toe
#include <iostream>
#include <string>

int main()
{
//set up random function
    srand(time(NULL));

//setting up variables to be used later
    int first = rand()%100;
    char a1 = ' ';
    char b1 = ' ';
    char c1 = ' ';
    char a2 = ' ';
    char b2 = ' ';
    char c2 = ' ';
    char a3 = ' ';
    char b3 = ' ';
    char c3 = ' ';
    bool pturn = true;
    bool aiturn = false;
    bool pturne = true;
    bool aiturne = true;
    int aimove;
    
    std::string pmove;

  std::cout << "lets play tic tac toe\n";
  
//loop function to make the game keep running so i dont need to write out every single possibility 
bool gamerun = true;
while(gamerun) {


        std::cout<<"your Turn\n";
        std::cout<<"  a b c \n";
        std::cout<<"1 "<<a1<<"|"<<b1<<"|"<<c1<<"\n";
        std::cout<<"  -+-+- \n";
        std::cout<<"2 "<<a2<<"|"<<b2<<"|"<<c2<<"\n";
        std::cout<<"  -+-+- \n";
        std::cout<<"3 "<<a3<<"|"<<b3<<"|"<<c3<<"\n";
        
        
        
        //going through all the options the player is allowed to pick aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        while(pturn) {

        std::cout<<"\nWhat move would you like to make? (example a1, b3, c2) \n";
        getline(std::cin, pmove);
        //std::cout<<pmove;

        if(pmove == "a1") {
            if(a1 == ' ') {
                a1 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "b1") {
            if(b1 == ' ') {
                b1 = 'x';
                pturne = false;
            }else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "c1") {
            if(c1 == ' ') {
                c1 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "a2") {
            if(a2 == ' ') {
                a2 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "b2") {
            if(b2 == ' ') {
                b2 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "c2") {
            if(c2 == ' ') {
                c2 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "a3") {
            if(a3 == ' ') {
                a3 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "b3") {
            if(b3 == ' ') {
                b3 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else if(pmove == "c3") {
            if(c3 == ' ') {
                c3 = 'x';
                pturne = false;
            } else {
                std::cout<<"spot already taken\ntry again\n";
            };
        } else {
            std::cout<<"error, please try again\n";
        };
        if(pturne == false) {
            pturn = false;
            aiturn = true;
        };
       //ai turn logic stuff aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        };
        while(aiturn) {
            
            aimove = rand()%99 + 1;
            aimove = aimove / 10;
            switch(aimove) {
            case 1:
                if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 2:
            if(a1 == ' ') {
                a1 = '0';
                aiturne = false;
            };
            case 3:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 4:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 5:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 6:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 7:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 8:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            };
            case 9:
            if(a1 == ' ') {
                a1 = 'o';
                aiturne = false;
            } 
            }
            aiturn = false;
            pturn = true;
        };
                
};
  std::cout <<first;
  
  
}