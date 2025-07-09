#include<stdio.h>
#include<string.h>

void Stringoutput(char *str, __int8 len)
{
    __int8 count = 0;
    __int8 word = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            if ( str[i] == 32) { word++; continue; }
            count++;
        }
    }
    printf("\nNo. of characters: %d\nNo. of words: %d\n",count,(word+1));
}
int main(int argc, char const *argv[])
{
    char testStr[] = "My course name is Automate Theory and Compiler";
    scanf("%[^\n]s", testStr); // Read a line of input including spaces
    
    __int8 length = strlen(testStr);
    Stringoutput(testStr, length);
    return 0;
}
