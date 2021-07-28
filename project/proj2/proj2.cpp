#include <iostream>
#include <windows.h>

using namespace std;

void fullscreen() {
    keybd_event(VK_MENU, 0x38, 0, 0);
}
int main() {
   fullscreen(); 
}
