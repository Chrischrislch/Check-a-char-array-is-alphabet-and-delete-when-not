#include <iostream>
#include <cstdio>
using namespace std;

char *checking(char *str) {
    int a = 0;
    int i = 0, j = 0;
    char c;
    while (str[a])
    {
        c = str[a];
        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
        {         
            str[a] = ' ';
        }
        else
        {
            str[a] = tolower(c);  //toupper(c) top upper case 
        }
        a++;
        
    }
    return str;
}
char* trim(char* str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (!isspace(str[i]))
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

int main()
{
    char str[] = "sadpjo@#ojisad12`./.,213/./asd/adw?/-*+/";
    checking(str);
    trim(str);
    cout << str;
    return 0;
}