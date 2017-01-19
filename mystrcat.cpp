#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

char* my_strcat(char *dest,char const *source)
{
    assert(source!=NULL||dest!=NULL);
    if(source==NULL)
        return dest;
    char* pivot=dest;
    while(*dest)
    {
        dest++;
    }
    while(*source)
    {
        *dest++=*source++;
    }
    *dest='\0';
    
    return pivot;
    
}
int main()
{
    char sou[]="stu";
    char des[]= "dent";
    char* str=my_strcat(des, sou);
    cout<<"str="<<str<<endl;
    return 0;
    
}