#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

char* my_strcpy(char *dest,const char *source)
{
    assert(source!=NULL);
    char *p = dest;
    while (*source!='\0')
    {
        *dest++=*source++;
    }
    return p;
}
int main()
{
    char s1[] = "123";
    char *s2 = new char[strlen(s1)];
    cout << my_strcpy(s2, s1) << endl;
    delete s2;
    return 0;
}