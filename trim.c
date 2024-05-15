#include <stdio.h>
#include <string.h>

typedef char string[100];

void getString(string str);
void trim(string inpstr, string outstr);


int main()
{
    string input;
    string output;

    getString(input);
    trim(input, output);
    printf("%s", output);
}

void getString(string str)
{
    printf("Enter the sentence: ");
    scanf(" %[^\n]", str);
}

void trim(string inpstr, string outstr)
{
    int o = 0;
    for (int i = 0; i < strlen(inpstr); i++)
    {
        if(inpstr[i] != ' ')
        {
            outstr[o++] = inpstr[i];
        }
    }
    outstr[o] = '\0';
}