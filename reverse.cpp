#include <iostream>
#include <assert.h>
using namespace std;

char * reverse(char* ori)
{
    assert(ori!=NULL);
    char* p=ori;
    char* q=ori;
    while(*q)
    {
        q++;
    }
    q--;
    while(q>p)
    {
       char t=*p;
        *p++=*q;
        *q--=t;
    }
    
    return ori;
}


int main()
{
    char str[]="student";
    cout<<reverse(str)<<endl;
}