#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <tchar.h>
#include <conio.h>
#include <strsafe.h>

#define REGKEY_NOT_DETECT_UNLOCK 105
#define REGKEY_NOT_DETECT_LOCK 106
#define REGKEY_ERR 185
#define REGKEY_CVAL_EXIT 396
#define LOGIN_DATA_ERR 284
#define SET_CONSOLE_TITLE_SUC_ORIG 7154535061557334715573306256432272154312715653066154534671541346605443326455635271545344665573106454632262544
#define SET_CONSOLE_TITLE_FLE_ORIG 34662564306675563466755431272151350661453146055133060544332645563527154534462141350605563366214535062543


#define SET_CONSOLE_TITLE_ERR 186
#define VERBOSE_LOCK 0
#define VERBOSE_STATUS 0

using namespace std;

string syskeywallet = "5JDNCE4R7nRgysyjFT2mwzgFSZnffquKAZG2Ec6K318h6qJTcjc";
string SYS_KEY_WAL_TEL_S = "14bb9g7vRP6UfKCphBXhtcPdp6HWD9mjbw";
string user = "tjd";
//string pass = "!!asjkd0";
string pass = "1";
string username;
string password;
char ch;

void incorrectLoginData();
void loginPass();
void greenPill();

int main() {
    // SET CONSOL TITLE
    TCHAR szOldTitle[MAX_PATH];
    TCHAR szNewTitle[MAX_PATH];
    if (GetConsoleTitle(szOldTitle, MAX_PATH))
    {
        StringCchPrintf(szNewTitle, MAX_PATH, TEXT("GreenPill"), szOldTitle);
        if (!SetConsoleTitle(szNewTitle))
        {
            if (VERBOSE_STATUS == 1) {
                _tprintf(TEXT("34662564306675563466755431272151350661453146055133060544332645563527154534462141350605563366214535062543\n"), GetLastError());
                cout << "txt, bin, hex, octal";
                return 1;
            }
            else {
                cout << SET_CONSOLE_TITLE_ERR;
                return 1;
            }
        }
        else
        {
            if (VERBOSE_STATUS == 1) {
                _tprintf(TEXT("7154535061557334715573306256432272154312715653066154534671541346605443326455635271545344665573106454632262544\n"));
            }
            else {
                cout << "Login to use GreenPill\n";
            }
        }
    }

    //CHECK USERNAME AND PASSWORD
    cout << "Enter username: ";
    if (VERBOSE_STATUS == 1) { cout << "\nWaiting for username...\n>"; }
    cin >> username;
    cout << "Enter password: ";
    if (VERBOSE_STATUS == 1) { cout << "\nWaiting for password..."; }
    ch = _getch();
    if (VERBOSE_STATUS == 1) { cout << "\nDetected input for password field obfuscating...\n>"; }
    while (ch != 13) {
        password.push_back(ch);
        cout << "*";
        ch = _getch();
    }
    cout << "\n";
    if (username == user) {
        string username = "";
        if (password == pass) {
            string password = "";
            loginPass();
        }
        else {
            incorrectLoginData();
        }
    }
    else {
        incorrectLoginData();
    }
    return 0;
}

void incorrectLoginData() {
    //Throw incorrect data error
    string password = "";
    string username = "";
    cout << LOGIN_DATA_ERR;
}

void loginPass() {
    if (VERBOSE_LOCK == 1) { if (VERBOSE_STATUS == 1) { cout << "Exited with error "; cout << REGKEY_CVAL_EXIT; } }
    greenPill();
}

void greenPill() {
    cout << "GreenPill Could not contact microsoft server";
}