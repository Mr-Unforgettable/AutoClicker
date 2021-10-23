// A simple auto clicker program
#include<iostream>
#include<Windows.h>

using namespace std;

void Options(){
    cout << "1. Press 'X' to enable\n";
    cout << "2. Press 'Z' to disable\n";
    cout << "3. Press 'C' to exit";
}
void clicker(){
    bool click = false; // default state
    while(true){
        if(GetAsyncKeyState('X')){          // if X key is pressed to enable
                click = true;
           }
        else if(GetAsyncKeyState('Z')){     // if Z key is pressed to disable
            click = false;
        }
        else if(GetAsyncKeyState('C')){
            exit(0);
       }

        if(click == true){                          // if click is 'TRUE' mouse button should be clicked automatically

            mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
            mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
            //edit the value in the next line to change the click speed
            Sleep(1); // 10 ms click speed
        }

    }
}
int main(){
    // Function calls
    Options();
    clicker();
    return 0;
}

